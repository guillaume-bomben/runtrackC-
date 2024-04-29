#include <iostream>

int main(){
    int number;
    int moyenne = 0;
    for (int i = 0; i < 5; i++){
        std::cout << "Enter a number: ";
        std::cin >> number;
        moyenne += number;
    }
    moyenne /= 5;
    std::cout << "The average of the 5 numbers is: " << moyenne << std::endl;
}