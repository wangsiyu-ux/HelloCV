#include "Crypto.h"
#include "FileHandler.h"
#include "Menu.h"
#include <iostream>

int main() {
    int choice;
    do {
        Menu::showMenu();
        choice = Menu::getChoice();

        switch (choice) {
            case 1: {
                std::string text = Menu::getInput("请输入要加密的文本: ");
                int key = Menu::getKey();
                Crypto crypto(key);
                std::string encrypted = crypto.encrypt(text);
                std::cout << "加密结果: " << encrypted << std::endl;
                break;
            }
            case 2: {
                std::string text = Menu::getInput("请输入要解密的文本: ");
                int key = Menu::getKey();
                Crypto crypto(key);
                std::string decrypted = crypto.decrypt(text);
                std::cout << "解密结果: " << decrypted << std::endl;
                break;
            }
            case 3: {
                std::string filePath = Menu::getFilePath("请输入要加密的文件路径: ");
                int key = Menu::getKey();
                try {
                    std::string content = FileHandler::readFile(filePath);
                    Crypto crypto(key);
                    std::string encrypted = crypto.encrypt(content);
                    std::string outPath = "encrypted_" + filePath;
                    if (FileHandler::writeFile(outPath, encrypted)) {
                        std::cout << "加密结果已保存到: " << outPath << std::endl;
                    } else {
                        std::cout << "保存文件失败!" << std::endl;
                    }
                } catch (const std::exception& e) {
                    std::cout << "错误: " << e.what() << std::endl;
                }
                break;
            }
            case 4: {
                std::string filePath = Menu::getFilePath("请输入要解密的文件路径: ");
                int key = Menu::getKey();
                try {
                    std::string content = FileHandler::readFile(filePath);
                    Crypto crypto(key);
                    std::string decrypted = crypto.decrypt(content);
                    std::string outPath = "decrypted_" + filePath;
                    if (FileHandler::writeFile(outPath, decrypted)) {
                        std::cout << "解密结果已保存到: " << outPath << std::endl;
                    } else {
                        std::cout << "保存文件失败!" << std::endl;
                    }
                } catch (const std::exception& e) {
                    std::cout << "错误: " << e.what() << std::endl;
                }
                break;
            }
            case 0:
                std::cout << "感谢使用，再见!" << std::endl;
                break;
            default:
                std::cout << "无效选择，请重新输入!" << std::endl;
        }
    } while (choice != 0);

    return 0;
}
