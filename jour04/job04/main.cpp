#include <iostream>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptrA = &a;
    int* ptrB = &b;
    int* ptrC = &c;
    std::cout << "Valeurs initiales :" << std::endl;
    std::cout << "a = " << *ptrA << ", b = " << *ptrB << ", c = " << *ptrC << std::endl;

    *ptrA = 100;
    *ptrB = 200;
    *ptrC = 300;
    std::cout << "Nouvelles valeurs :" << std::endl;
    std::cout << "a = " << *ptrA << ", b = " << *ptrB << ", c = " << *ptrC << std::endl;

    return 0;
}
