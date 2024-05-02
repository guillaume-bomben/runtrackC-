#include <iostream>
#include <cstdlib> 
#include <ctime>

using namespace std;
int main() {
    srand(time(0)); 
    const int nombre_mystere = rand() % 101; 
    cout << "Nombre mystere : " << nombre_mystere << endl;
    const int nombre_max_tentatives = 5;
    cout << "Bienvenue dans le jeu du Nombre Mystere !" << endl;
    cout << "Devinez le nombre mystere compris entre 0 et 100." << endl;
    cout << "Vous avez " << nombre_max_tentatives << " tentatives." << endl;
    int tentative;
    bool trouve = false;
    for (int i = 0; i < nombre_max_tentatives; ++i) {
        cout << "Tentative " << i+1 << " : ";
        cin >> tentative;
        if (tentative == nombre_mystere) {
            trouve = true;
            break; 
        } else if (tentative < nombre_mystere) {
            cout << "Trop petit !" << endl;
        } else {
            cout << "Trop grand !" << endl;
        }
    }
    if (trouve) {
        cout << "Bravo ! Vous avez trouve le nombre mystere : " << nombre_mystere << endl;
    } else {
        cout << "Dommage ! Le nombre mystere etait : " << nombre_mystere << endl;
    }

    return 0;
}
