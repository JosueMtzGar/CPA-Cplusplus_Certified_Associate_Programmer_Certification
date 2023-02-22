#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;

    cout << "Introduce el texto: ";
    getline(cin,texto);

    for(int i = 0; i < texto.size(); i++){
        if( 96 < texto[i] && texto[i] < 123)
        texto[i] = texto [i] - 32;
    }

    cout << texto;
}