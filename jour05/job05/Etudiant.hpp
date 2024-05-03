#include <iostream>
#include <string>

using namespace std;

class Etudiant {
    private:
        string nom;
        string prenom;
        int age;
        int matricule;
    
    public:
        Etudiant(const string& nom, const string& prenom, int age, int matricule)
            : nom(nom), prenom(prenom), age(age), matricule(matricule) {}
        
        void afficherInfos() {
            cout << "Nom: " << nom << endl;
            cout << "Prenom: " << prenom << endl;
            cout << "Age: " << age << endl;
            cout << "Matricule: " << matricule << endl;
        }
};