#include <iostream>
#include <vector>

using namespace std;

int datos1[] = {1,2,3,4,5,6,7,8,9,0};
int datos2[] = {0,9,8,7,6,5,4,3,2,1};

namespace Datos1{
    int adquirir(int pos){
        return datos1[pos];
    }
    int suma(int pos1, int pos2){
        return datos1[pos1] + datos1[pos2];
    }
    void cambia(int pos, int valor){
        datos1[pos] = valor;
    }
    void imprime(){
        for(int x = 0; x < 10; x++){
            cout << adquirir(x) << " ";
        }
    }
}

namespace Datos2{
    int adquirir(int pos){
        return datos2[pos];
    }
    int suma(int pos1, int pos2){
        return datos2[pos1] + datos2[pos2];
    }
    void cambia(int pos, int valor){
        datos2[pos] = valor;
    }
    void imprime(){
        for(int x = 0; x < 10; x++){
            cout << adquirir(x) << " ";
        }
    }
}

int main(){
    //Para datos 1
    Datos1::cambia(3,5);
    Datos1::cambia(1,5);
    Datos1::cambia(2,5);
    Datos1::imprime();

    cout << endl;

    //Para datos 2
    Datos2::cambia(3,5);
    Datos2::cambia(1,5);
    Datos2::cambia(2,5);
    Datos2::imprime();
}