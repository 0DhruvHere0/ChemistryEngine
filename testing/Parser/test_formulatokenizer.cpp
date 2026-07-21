#include <cassert>
#include <iostream>
#include "ChemEngine/parser/FormulaTokenizer.hpp"
using namespace ChemEngine::Parser;
void testWater()
{
    FormulaTokenizer tokenizer("H2O");
    auto tokens = tokenizer.tokenize();
    assert(tokens.size() == 4);
    assert(tokens[0].type == TokenType::Element);
    assert(tokens[0].lexeme == "H");
    assert(tokens[1].type == TokenType::Number);
    assert(tokens[1].lexeme == "2");
    assert(tokens[2].type == TokenType::Element);
    assert(tokens[2].lexeme == "O");
    assert(tokens[3].type == TokenType::End);
}
void testSodiumChloride()
{
    FormulaTokenizer tokenizer("NaCl");
    auto tokens = tokenizer.tokenize();
    assert(tokens.size() == 3);
    assert(tokens[0].type == TokenType::Element);
    assert(tokens[0].lexeme == "Na");
    assert(tokens[1].type == TokenType::Element);
    assert(tokens[1].lexeme == "Cl");
    assert(tokens[2].type == TokenType::End);
}
void testParentheses()
{
    FormulaTokenizer tokenizer("Ca(OH)2");
    auto tokens = tokenizer.tokenize();
    assert(tokens.size() == 7);
    assert(tokens[0].lexeme == "Ca");
    assert(tokens[1].type == TokenType::LeftParenthesis);
    assert(tokens[2].lexeme == "O");
    assert(tokens[3].lexeme == "H");
    assert(tokens[4].type == TokenType::RightParenthesis);
    assert(tokens[5].lexeme == "2");
    assert(tokens[6].type == TokenType::End);
}
void testMultipleDigits()
{
    FormulaTokenizer tokenizer("C12H22O11");
    auto tokens = tokenizer.tokenize();
    assert(tokens[0].lexeme == "C");
    assert(tokens[1].lexeme == "12");
    assert(tokens[2].lexeme == "H");
    assert(tokens[3].lexeme == "22");
    assert(tokens[4].lexeme == "O");
    assert(tokens[5].lexeme == "11");
    assert(tokens[6].type == TokenType::End);
}
int main()
{
    testWater();
    testSodiumChloride();
    testParentheses();
    testMultipleDigits();
    std::cout << "All FormulaTokenizer tests passed!\n";
    return 0;
}