#include <iostream>
#include <string>
#include <vector>

using namespace std;

void MostrarVector(vector<string> datos){
    //imprecion de vector ordenado
    for(int i = 0; i < datos.size(); i++){
        cout << datos[i] << " ";
    }
}

//ordenar alfabeticamente el vecto de strings
int main(){
    vector<string> datos{
        "Hola", "Mundo",
        "Clase", "Programcacion",
        "C++", "Certificacion",
        "SEP"
    };
    int num;
    bool cambiar;

    cout << "> Vector original " << endl;
    MostrarVector(datos);

    //ordenamiento de vector en descendente
    do{
        cambiar = false;
        for(int i = 0; i < datos.size()-1; i++){
            num = datos[i].compare(datos[i+1]);
            if(num > 0){
                cambiar = true;
                string aux = datos[i];
                datos[i] = datos[i+1];
                datos[i+1] = aux;
            }else{
                continue;
            }
        }
    }while(cambiar);

    cout << endl << endl;
    cout << "> Vector ordenado descendentemente " << endl;
    MostrarVector(datos);

    //ordenamiento de vector en ascendente
    do{
        cambiar = false;
        for(int i = 0; i < datos.size()-1; i++){
            num = datos[i].compare(datos[i+1]);
            if(num < 0){
                cambiar = true;
                string aux = datos[i];
                datos[i] = datos[i+1];
                datos[i+1] = aux;
            }else{
                continue;
            }
        }
    }while(cambiar);

    cout << endl << endl;
    cout << "> Vector ordenado ascendentemente " << endl;
    MostrarVector(datos);

}