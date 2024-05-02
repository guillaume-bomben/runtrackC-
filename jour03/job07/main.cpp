#include <iostream>

using namespace std;

int main(){
    int T[10];
    int index = 0;

    for(int i = 0; i < 10; i++){
        cout << "Entrez un nombre : ";
        cin >> T[i];
        if(T[i] > T[i-1] && i > 0){
            index = i;
        }
    }
    cout << "L'index du plus grand nombre est : " << index << endl;
}