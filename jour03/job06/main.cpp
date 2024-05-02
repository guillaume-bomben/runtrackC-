#include <iostream>

using namespace std;

int main(){
    int T[10];
    int nbSup5 = 0;
    for(int i = 0; i < 10; i++){
        cout << "Entrez un nombre : ";
        cin >> T[i];
        nbSup5 += 1 ? T[i] > 5 : 0;
    }
    cout << "Il y a " << nbSup5 << " nombres supérieurs à 5." << endl;
}