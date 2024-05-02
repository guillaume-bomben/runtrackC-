#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string phrase = "vive la plateforme !";
    string voyels[6] = {"a","e","i","o","u","y"};

    for (int i = 0; i < 6; i++){
        phrase.erase(remove(phrase.begin(), phrase.end(), voyels[i][0]), phrase.end());
    }
    cout << phrase << endl;
}