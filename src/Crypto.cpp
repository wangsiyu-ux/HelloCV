#include "Crypto.h"
#include <cctype>

std::string Crypto::encrypt(const std::string& text) {
    std::string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base + key) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}

std::string Crypto::decrypt(const std::string& text) {
    std::string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += (c - base - key + 26) % 26 + base;
        } else {
            result += c;
        }
    }
    return result;
}
