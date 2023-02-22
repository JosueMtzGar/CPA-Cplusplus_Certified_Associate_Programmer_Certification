#include <iostream>
#include <string>

using namespace std;

//voltea el orden de las letras en un string
int main(){
    string texto;
    string texto_volteado = "";

    cout << "> Introduce el texto: ";
    getline(cin,texto);

    for(int i = texto.size(); i <= texto.size(); i--){
        texto_volteado.push_back(texto[i]);
    }

    cout << "> El texto volteado es: " << texto_volteado;

    /* Nota: Este codigo podria utilizarse para comprobar
    si una palabra es palindroma. */
}