#include "BridgeImplementador.h"
#include <iostream>

using namespace std;

void Figura::dibujar(){
    cout << "." << endl;
}

void FiguraVerde::dibujar(){
    system("color 0F");
    cout << "." << endl;
}

Cuadrado::Cuadrado(int size): size(size){}

void Cuadrado::dibujar(){

}