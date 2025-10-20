#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H
#include <string>

class FileHandler {
public:
    static std::string readFile(const std::string& filePath);
    static bool writeFile(const std::string& filePath, const std::string& content);
};

#endif // FILE_HANDLER_H
