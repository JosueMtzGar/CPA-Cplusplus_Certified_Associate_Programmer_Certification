/* Este codigo cambia de lugar una letra dentro
de un string de acuerdo a las coordenadas 
introducidas por el usuario */

#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto;
    int pos1, pos2, aux;

    cout << "> Introduce el texto: ";
    getline(cin,texto);

    //impresion del string y las posiciones correspondientes de las letras
    cout << endl << "Las posiciones del string son: " << endl;
    for(int i = 0; i < texto.length(); i++){
        cout << texto[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < texto.length(); i++){
        cout << i << " ";
    }

    cout << endl;
    cout << endl << "Indique la posicion de la letra a cambiar" << "(0-" << texto.size() -1 << ") : ";
    cin >> pos1;

    cout << "Indique la posicion final de la letra" << "(0-" << texto.size() -1 << ") : ";
    cin >> pos2;

    //se hace el cambio de la letra
    for(int i = 0; i < texto.length(); i++){
        if(i == pos1){
            aux = texto[i];
            texto[i] = texto[pos2];
            texto[pos2] = aux; 
        }
    }

    cout << endl << "> El texto con cambios es: \" " << texto << " \" ";
}