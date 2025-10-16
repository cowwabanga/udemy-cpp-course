#include <iostream>

int addNumber(int first_number, int second_number) {
    int sum = first_number + second_number;
    return sum;
}

int main(int argc, char **argv) {
    /*
    int firstNumber = 12;
    int secondNumber = 9;
    */
    int firstNumber {3};
    int secondNumber {7};

    int firstAnswer = firstNumber + secondNumber;
    int secondAnswer = addNumber(firstNumber, secondNumber);
    
    std::cout << "The first number is " << firstNumber << "." << std::endl;    
    std::cout << "The second number is " << secondNumber << "." << std::endl;    
    std::cout << "The answer is " << firstAnswer << "." << std::endl;
    std::cout << "The answer is " << secondAnswer << "." << std::endl;
    // Or, we can do it this way:
    std::cout << "The answer is " << addNumber(12, 9) << "." << std::endl;

    return 0;
}