#include <iostream>

consteval int get_value() {
    return 6;
}

int main() {
    constexpr int value = get_value();
    std::cout << "Value: " << value << std::endl;
    return 0;
}