#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

class Tokenizer {
  public:

  Tokenizer() {}
  ~Tokenizer() {}

  std::vector<std::string> tokenize(const std::string& query) {
    std::vector<std::string> tokens;
    std::string currentToken;

    for (char c : query) {
        if (std::isspace(c)) {
            if (!currentToken.empty()) {
                tokens.push_back(currentToken);
                currentToken.clear();
            }
        } else if (std::ispunct(c)) {
            if (!currentToken.empty()) {
                tokens.push_back(currentToken);
                currentToken.clear();
            }
            tokens.push_back(std::string(1, c)); // Add punctuation as separate token
        } else {
            currentToken += c;
        }
    }

    if (!currentToken.empty()) {
        tokens.push_back(currentToken);
    }

    return tokens;
  }
};

class Parser {

};

class ASTNode {

};
