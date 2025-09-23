#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string text = "Hello, World! How are you today?";
    int totalLength = text.length();
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int punctuation = 0;
    int uppercase = 0;
    int lowercase = 0;

    for (char c : text) {
        if (std::isalpha(c)) {
            letters++;
            if (std::isupper(c)) {
                uppercase++;
            } else {
                lowercase++;
            }
        } else if (std::isdigit(c)) {
            digits++;
        } else if (std::isspace(c)) {
            spaces++;
        } else if (std::ispunct(c)) {
            punctuation++;
        }
    }

    std::cout << "Text: \"" << text << "\"" << std::endl;
    std::cout << "Total length: " << totalLength << std::endl;
    std::cout << "Letters: " << letters << std::endl;
    std::cout << "Digits: " << digits << std::endl;
    std::cout << "Spaces: " << spaces << std::endl;
    std::cout << "Punctuation: " << punctuation << std::endl;
    std::cout << "First character: '" << text.front() << "'" << std::endl;
    std::cout << "Last character: '" << text.back() << "'" << std::endl;
    std::cout << "Uppercase letters: " << uppercase << std::endl;
    std::cout << "Lowercase letters: " << lowercase << std::endl;

    return 0;
}