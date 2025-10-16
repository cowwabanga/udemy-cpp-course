#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    // int age {21};
    int input_age;
    std::string name;
    
    // std::cout << "Hello C++20!" << std::endl;
    // std::cout << "Age: " << age << "." << std::endl;
    // std::cerr << "Error: something gone wrong!" << std::endl;
    // std::clog << "Log: this is a log message." << std::endl;
    std::cout << "Please type your name and age:" << std::endl;
    // std::cin >> name >> input_age;
    // std::cin >> name;
    std::getline(std::cin, name);
    std::cin >> input_age;
    std::cout << "Hello, " << name 
        << ". You are " << input_age << " years old." << std::endl;
    return 0;
}