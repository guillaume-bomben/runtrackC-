#include <iostream>
#include <algorithm> 
#include <string>

using namespace std;
int main() {
    string chaine1, chaine2 = "Bonjour";
    cout << "Veuillez saisir une chaine de caracteres : ";
    getline(cin, chaine1);
    sort(chaine1.begin(), chaine1.end());
    sort(chaine2.begin(), chaine2.end());
    cout << "Chaine 1 trie : " << chaine1 << endl;
    cout << "Chaine 2 trie : " << chaine2 << endl;
    return 0;
}
