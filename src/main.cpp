#include <iostream>
#include <unistd.h>
#include <algorithm>

class TUI
{
public:
    std::string menu;

    TUI(const std::string& _menu) : menu(_menu){}

    // may change in the future
    void print_memu(const bool newline)
    {
        if (newline)
          std::cout << menu << '\n';

        else
          std::cout << menu;
    }

    void print(const std::string& contant)
    {
        std::cout << contant;

        return;
    }
};
