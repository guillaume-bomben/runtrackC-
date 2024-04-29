#include <iostream>

int main() {
    int nunber1, number2;
    std::cout << "Enter a number: ";
    std::cin >> nunber1;
    std::cout << "Enter another number: ";
    std::cin >> number2;
    std::cout << "The sum of " << nunber1 << " and " << number2 << " is " << nunber1 + number2 << std::endl;
    return 0;
}