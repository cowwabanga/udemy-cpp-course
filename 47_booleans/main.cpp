#include <iostream>

int main(int argc, char **argv)
{
    // Bool takes 1 byte in memory
    bool red_light {true};
    bool green_light {false};
    
    if (red_light == true) {
        std::cout << "Stop!" << std::endl;
    } else {
        std::cout << "Go through!" << std::endl;
    }

    if (green_light) {
        std::cout << "The light is green!" << std::endl;
    } else {
        std::cout << "The light is NOT green!" << std::endl;
    }

    std::cout << std::endl;

    // sizeof()
    std::cout << "sizeof(bool) is " << sizeof(bool) << std::endl;

    // Printing out a bool
    // 1 --> true
    // 0 --> false
    std::cout << std::endl;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;
    
    // std::boolalpha allows to see bool variables as true and false
    std::cout << std::boolalpha;
    std::cout << std::endl;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    return 0;
}