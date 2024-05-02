#include <iostream>
#include <string>
using namespace std;

int main() {
    string chaine1 = "Hello";
    string chaine2 = "Hello";

    if (chaine1 == chaine2) {
        cout << "Les chaines sont egales." << endl;
        return 0; // Les chaînes sont égales, retourne 0
    } else {
        cout << "Les chaines ne sont pas egales." << endl;
        return 1; // Les chaînes ne sont pas égales, retourne 1
    }
}
