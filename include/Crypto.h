#ifndef CRYPTO_H
#define CRYPTO_H
#include <string>

class Crypto {
private:
    int key;
public:
    Crypto(int k) : key(k) {}
    std::string encrypt(const std::string& text);
    std::string decrypt(const std::string& text);
};

#endif // CRYPTO_H
