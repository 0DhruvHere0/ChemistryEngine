#include "ChemEngine/Parser/FormulaTokenizer.hpp"
#include <cctype>
#include <stdexcept>
namespace ChemEngine
{
    namespace Parser
    {
        FormulaTokenizer::FormulaTokenizer(const std::string& formula)
            : m_formula(formula),
              m_current(0)
        {
        }
        bool FormulaTokenizer::isAtEnd() const
        {
            return m_current >= m_formula.length();
        }
        char FormulaTokenizer::peek() const
        {
            if (isAtEnd())
            {
                return '\0';
            }
            return m_formula[m_current];
        }
        char FormulaTokenizer::advance()
        {
            if (isAtEnd())
            {
                return '\0';
            }
            return m_formula[m_current++];
        }
        std::string FormulaTokenizer::readElement()
        {
            std::string symbol;
            symbol += advance();
            while (!isAtEnd() && std::islower(static_cast<unsigned char>(peek())))
            {
                symbol += advance();
            }
            return symbol;
        }
        std::string FormulaTokenizer::readNumber()
        {
            std::string number;
            while (!isAtEnd() && std::isdigit(static_cast<unsigned char>(peek())))
            {
                number += advance();
            }
            return number;
        }
        std::vector<Token> FormulaTokenizer::tokenize()
        {
            std::vector<Token> tokens;
            while (!isAtEnd())
            {
                char current = peek();
                if (std::isspace(static_cast<unsigned char>(current)))
                {
                    advance();
                }
                else if (std::isupper(static_cast<unsigned char>(current)))
                {
                    tokens.emplace_back(
                        TokenType::Element,
                        readElement()
                    );
                }
                else if (std::isdigit(static_cast<unsigned char>(current)))
                {
                    tokens.emplace_back(
                        TokenType::Number,
                        readNumber()
                    );
                }
                else if (current == '(')
                {
                    advance();
                    tokens.emplace_back(
                        TokenType::LeftParenthesis,
                        "("
                    );
                }
                else if (current == ')')
                {
                    advance();
                    tokens.emplace_back(
                        TokenType::RightParenthesis,
                        ")"
                    );
                }
                else
                {
                    throw std::invalid_argument(
                        "Invalid character in chemical formula."
                    );
                }
            }
            tokens.emplace_back(TokenType::End, "");
            return tokens;
        }
    }
}