#include <iostream>

int main(){
    int number1, number2,number3;
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;
    std::cout << "Enter the third number: ";
    std::cin >> number3;
    std::cout << "The biggest number is: " << std::max(number1, std::max(number2, number3)) << std::endl;
}