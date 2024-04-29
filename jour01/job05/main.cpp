#include <iostream>

int main(){
    int number1, number2;
    std::cout << "Enter a number: ";
    std::cin >> number1;
    std::cout << "Enter another number: ";
    std::cin >> number2;
    std::cout << "The mult of " << number1 << " and " << number2 << " is " << number1 * number2 << std::endl;
    return 0;
}