#include "Menu.h"
#include <iostream>
#include <string>

void Menu::showMenu() {
    std::cout << "\n=== 加密解密工具菜单 ===\n";
    std::cout << "1. 文本加密\n";
    std::cout << "2. 文本解密\n";
    std::cout << "3. 文件加密\n";
    std::cout << "4. 文件解密\n";
    std::cout << "0. 退出\n";
    std::cout << "请选择功能: ";
}

int Menu::getChoice() {
    int choice;
    std::cin >> choice;
    std::cin.ignore();
    return choice;
}

std::string Menu::getInput(const std::string& prompt) {
    std::cout << prompt;
    std::string text;
    std::getline(std::cin, text);
    return text;
}

int Menu::getKey() {
    int key;
    std::cout << "请输入密钥: ";
    std::cin >> key;
    std::cin.ignore();
    return key;
}

std::string Menu::getFilePath(const std::string& prompt) {
    std::cout << prompt;
    std::string path;
    std::getline(std::cin, path);
    return path;
}
