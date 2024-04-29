#include <iostream>

int main(){
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number % 2 == 0){
        std::cout << "le nombre " << number << " est pair." << std::endl;
    } else {
        std::cout << "le nombre " << number << " est impair." << std::endl;
    }
}