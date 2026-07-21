#pragma once
#include <string>
namespace ChemEngine
{
    namespace Parser
    {
        enum class TokenType
        {
            Element,
            Number,
            LeftParenthesis,
            RightParenthesis,
            End
        };
        struct Token
        {
            TokenType type;
            std::string lexeme;
            Token() = default;
            Token(TokenType tokenType, const std::string& tokenLexeme)
                : type(tokenType),
                  lexeme(tokenLexeme)
            {
            }
        };
    }
}