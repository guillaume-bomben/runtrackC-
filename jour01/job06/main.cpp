#include <iostream>

int main(){
    int table;
    std::cout << "Entrez un nombre: ";
    std::cin >> table;
    for (int i = 1; i <= 10; i++) {
        std::cout << table << " x " << i << " = " << table * i << std::endl;
    }
}