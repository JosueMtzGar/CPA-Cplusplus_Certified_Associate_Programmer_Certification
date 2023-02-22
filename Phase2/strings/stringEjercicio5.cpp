#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;

    cout << "Introduce texto: ";
    getline(cin, texto);

    for(int i = 0; i < texto.size(); i++){
        if( texto[i] == 'c' && texto[i+1] == 'a' ){
            texto[i] = 'k';
            texto[i+1] = 'o';
        }
    }

    cout << "El texto con cambios es: " <<  texto;
}