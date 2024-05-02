#include <iostream>
using namespace std;
int sommeElementsPairs(int* tableau, int taille) {
    int somme = 0;
    for (int i = 0; i < taille;++i) {
        if (tableau[i] % 2 == 0) { 
            somme += tableau[i];
        }
    }
    return somme;
}

int main() {
    const int taille = 5;
    int tableau[taille];
    cout << "Veuillez entrer " << taille << " entiers :" << endl;
    for (int i = 0; i < taille; ++i) {
        cout << "Element " << i+1 << " : ";
        cin >> tableau[i];
    }
    int somme_pairs = sommeElementsPairs(tableau, taille);
    cout << "La somme des elements pairs du tableau est : " << somme_pairs << endl;
    return 0;
}
