#include <iostream>
#include "pila.cpp" //la forma correcta es con "pila.h", funciona en visual studio c++.

/*  Operador de push(<<) GLOBAL */
Pila& operator<<(Pila &p, int value){
    p.push(value);
    return p;
}

/* Operador de pop(>>) GLOBAL */
Pila& operator>>(Pila &izq, int &der){
    der = izq.pop();
    return izq;
}

int main(){
    int size = 0;
    cout << "Introducir tamaño de pila" << endl;
    cin >> size;
    Pila p(size);
    char opc = 'y';
    /* while(opc != 'x'){
        cout << "Eliga una opcion:" << endl;
        cout << "x) Salir" << endl;
        cout << "a) Agregar" << endl;
        cout << "r) Retirar" << endl;


    } */
}