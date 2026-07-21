#pragma once
#include <string>
#include <vector>
#include "ChemEngine/Parser/Token.hpp"
namespace ChemEngine
{
    namespace Parser
    {
        class FormulaTokenizer
        {
        public:
            explicit FormulaTokenizer(const std::string& formula);
            std::vector<Token> tokenize();
        private:
            std::string m_formula;
            std::size_t m_current;
            bool isAtEnd() const;
            char peek() const;
            char advance();
            std::string readElement();
            std::string readNumber();
        };
    }
}