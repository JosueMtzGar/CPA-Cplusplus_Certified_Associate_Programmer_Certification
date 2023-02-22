#include <iostream>

using namespace std;

namespace Datos{
    int *datos = new int[10];

    int suma(int pos1, int pos2){
        return datos[pos1] + datos[pos2];
    }
    int resta(int pos1, int pos2){
        return datos[pos1] - datos[pos2];
    }
}

namespace Datos{
    void borrar(){
        delete [] datos;
    }
    void lectura(){
        for(int i = 0; i < 10; i++){
            cout << "Introdusca el dato " << (i+1) << " : "; 
            cin >> datos[i];
            }
    }
}

using namespace Datos;

int main(){
    lectura();
    cout << suma(0,1);
}