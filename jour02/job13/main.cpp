#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Afficher l'en-tête de la table
    cout << "Table de multiplication de 1 à 10 :" << endl;

    // Afficher les colonnes de l'en-tête
    cout << setw(4) << "x |";
    for (int i = 1; i <= 10; ++i) {
        cout << setw(4) << i << " ";
    }
    cout << endl;

    // Afficher la ligne de séparation
    cout << "----+-------------------------------------------------" << endl;

    // Afficher le contenu de la table
    for (int i = 1; i <= 10; ++i) {
        // Afficher le numéro de la ligne
        cout << setw(2) << i << " |";

        // Afficher les produits de la ligne
        for (int j = 1; j <= 10; ++j) {
            cout << setw(4) << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}
