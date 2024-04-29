#include <iostream>

int main(){
    int number,reverse,remainder;
    std::cout << "Enter a number: ";
    std::cin >> number;

    reverse = 0;
    while(number != 0){
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    std::cout << "Reversed number: " << reverse << std::endl;
}