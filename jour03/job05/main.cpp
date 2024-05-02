#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string saisie;
    regex regex_heure("\\d{1,2}h\\d{2}");
    cout << "Veuillez entrer une heure au format XXhXX : ";
    cin >> saisie;

    if (regex_match(saisie, regex_heure)) {
        cout << "Format d'heure valide." << endl;
    } else {
        cout << "Format d'heure invalide." << endl;
    }
    return 0;
}
