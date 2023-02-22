#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string texto, palabra;
    int aux(0), num(0);
    vector<string> substrings1(0), substrings2(0);
    vector<int> contadores(0);

    cout << "Introdusca el texto: ";
    getline(cin,texto);
    texto.push_back(' '); //para poder guardar la ultima palabra del texto

    //se obtiene cada palabra y se guarda como miembro del vector substrings1
    for(int i = 0; i < texto.size(); i++){
        if( texto[i] == ' ' ){
            substrings1.push_back(texto.substr(aux,i-aux));
            aux = i+1;
        }
    }

    //copiando el contenido del vector substrings1 al substring2
    for(int i = 0; i < substrings1.size(); i++){
        substrings2.push_back(substrings1[i]);
        contadores.push_back(0); //se agrega un contador inicializado en cero por cada palabra
    }

    //comparando cada palabra en el substrings1 con todas las palabras del substrings2
    for(int i = 0; i < substrings1.size(); i++){
        for(int j = 0; j < substrings2.size(); j++){
            num = substrings1[i].compare(substrings2[j]);
            if( !num ){
                contadores[i]++; //aumentando el contador si se encuentra concidencia
            }
        }
    }

    for(int i = 0; i < substrings1.size(); i++){
        for(int j = 0; j < substrings2.size(); j++){
            num = substrings1[i].compare(substrings2[j]);
            
            if( !num && (contadores[i]-1) == 1){
                cout << endl << "La palabra \"" << substrings1[i] << "\"  se repite " << contadores[i]-1 << " vez"; 
            }else{
                cout << endl << "La palabra \"" << substrings1[i] << "\"  se repite " << contadores[i]-1 << " veces";
            }
        }
    }
}