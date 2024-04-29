#include <iostream>

int main(){
    int price, quantity, tva;
    std::cout << "Enter the price/kg of the product: ";
    std::cin >> price;
    std::cout << "Enter the quantity of the product: ";
    std::cin >> quantity;
    std::cout << "Enter the TVA rate: ";
    std::cin >> tva;
    std::cout << "The price of " << quantity << "kg of the product is: " << price * quantity * (tva*0.01 + 1) << "€" << std::endl;
}