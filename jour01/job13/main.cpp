#include <iostream>
#include <cmath>

int main(){
    int n;
    int total = 0;
    std::cout << "Entrez un nombre: ";
    std::cin >> n;

    if (n<5){
        for (int i = 1; i <= n; i++){
            total += pow(i, 3);
        }
    }
    else if (n>5){
        for (int i = 5; i <= n; i++){
            total += pow(i, 3);
        }
    }
    else{
        total = pow(5, 3);
    }
    std::cout << "La somme des cubes des entiers de 5 à " << n << " est: " << total << std::endl;
}