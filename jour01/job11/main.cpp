#include <iostream>

int main(){
    int n,m;
    std::cout << "Entrez un nombre n: ";
    std::cin >> n;
    std::cout << "Entrez un nombre m: ";
    std::cin >> m;
    std::cout << "n = " << n << " et m = " << m << std::endl;
    int temp = n;
    n = m;
    m = temp;
    std::cout << "n = " << n << " et m = " << m << std::endl;
}