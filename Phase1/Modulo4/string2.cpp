#include <iostream>
#include <string>

/*Este progrma cambio a mayuscula la primera letra
de cada palabra en una oracion */

using namespace std;

int main(){
    string texto;
    int minuscula, mayuscula;

    cout << "Introdusca texto" << endl;
    getline(cin, texto);

    texto[0] -= 32;

    for (int i = 0; i <= texto.size(); i++){
        if (texto[i] == ' '){
            minuscula = static_cast<int> (texto[i+1]);
            mayuscula = minuscula -32;
            texto[i+1] = mayuscula;
        }else{
            continue;
        }
    }

    cout << "'" << texto << "'" << endl;
    
}