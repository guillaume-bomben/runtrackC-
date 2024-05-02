#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string phrase = "vive la plateforme !";

    transform(phrase.begin(), phrase.end(), phrase.begin(), ::toupper);
    cout << phrase << endl;
    return 0;
}