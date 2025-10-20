#include "FileHandler.h"
#include <fstream>
#include <stdexcept>

std::string FileHandler::readFile(const std::string& filePath) {
    std::ifstream file(filePath);
    if (!file.is_open()) {
        throw std::runtime_error("无法打开文件: " + filePath);
    }
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    file.close();
    return content;
}

bool FileHandler::writeFile(const std::string& filePath, const std::string& content) {
    std::ofstream file(filePath);
    if (!file.is_open()) {
        return false;
    }
    file << content;
    file.close();
    return true;
}
