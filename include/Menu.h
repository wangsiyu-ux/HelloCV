#ifndef MENU_H
#define MENU_H
#include <string>
class Menu {
public:
    static void showMenu();
    static int getChoice();
    static std::string getInput(const std::string& prompt);
    static int getKey();
    static std::string getFilePath(const std::string& prompt);
};

#endif // MENU_H
