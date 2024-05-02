#include <iostream>
#include <vector>

using namespace std;

vector<int> fusionnerTableauxTriés(const vector<int>& tableau1, const vector<int>& tableau2) {
    vector<int> tableau_fusionne;
    size_t i = 0, j = 0;
    while (i < tableau1.size() && j < tableau2.size()) {
        if (tableau1[i] <= tableau2[j]) {
            tableau_fusionne.push_back(tableau1[i]);
            ++i;
        } else {
            tableau_fusionne.push_back(tableau2[j]);
            ++j;
        }
    }
    while (i < tableau1.size()) {
        tableau_fusionne.push_back(tableau1[i]);
        ++i;
    }
    while (j < tableau2.size()) {
        tableau_fusionne.push_back(tableau2[j]);
        ++j;
    }
    return tableau_fusionne;
}

int main() {
    vector<int> tableau1 = {1, 3, 5, 7, 9};
    vector<int> tableau2 = {2, 4, 6, 8, 10};
    vector<int> tableau_fusionne = fusionnerTableauxTriés(tableau1, tableau2);
    cout << "Tableau fusionne : ";
    for (int num : tableau_fusionne) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
