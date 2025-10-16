#include <iostream>

int main(int argc, char **argv)
{
    int number1; // WARNING Variable may contain random garbage value
    int number2 {}; // Braced initialization - Zero if not there is no value
    int number3 {10}; // Braced initialization 
    int number4 = 15; // Assigment initialization
    int number5 (20); // Functional initialization
    int number6 {number3 + number4}; // Can use expression as initializer
    // int number7 {new_number + another_number}; // Will throw an error if variables are not initialized
    signed int number8 {10}; 
    signed int number9 {-300}; // signed allows to store negative numbers in variable
                               // WARNING arithmetic operations between signed and unsigned
                               // values can be innacurate
    unsigned int number10 {100}; // unsigned allows to store ONLY positive numbers

    std::cout << "number1 is " << number1 << std::endl;
    std::cout << "number2 is " << number2 << std::endl;
    std::cout << "number3 is " << number3 << std::endl;
    std::cout << "number4 is " << number4 << std::endl;
    std::cout << "number5 is " << number5 << std::endl;
    std::cout << "number6 is " << number6 << std::endl;
    std::cout << "Sum of number8 and number9 is " << number8 + number9 << std::endl;
    std::cout << "number10 is " << number10 << std::endl;

    std::cout << "size of number6 is " << sizeof(number6) << std::endl;
    std::cout << "size of number9 is " << sizeof(number9) << std::endl;
   
    return 0;
}