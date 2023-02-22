#include <iostream>
#include <string>

// Este programa imprime el abecedario
// en mayusculas y minisculas

using namespace std;

int main(){
    string mayusculas = "A";
    string minusculas;

    for (int i = 1; i <= 25; i++){
        mayusculas.push_back(mayusculas[i-1] + 1);
    }
    cout << mayusculas << endl;

    for (int i = 0; i <= 25; i++){
        minusculas.push_back(mayusculas[i] + 32);
    }
    cout << minusculas << endl;
}