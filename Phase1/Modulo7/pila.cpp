#include "pila.h"
#include <iostream>

using namespace std;

Pila::Pila(int total){
    cout << "Inicializado" << endl;
    this->total = total;
    this->datos = new int[total];
}

Pila::~Pila(){
    delete [] this->datos;
}

int Pila::pop(){
    if(contador-1 >=0)
        return this->datos[--contador];
    throw out_of_range("Pila vacia");
}

void Pila::push(int value){
    if(contador+1 <= this->total)
        this->datos[contador++] = value;
    else
        throw out_of_range("Pila llena");
}

int Pila::getTotal(){
    return this->total;
}

int& Pila::operator[](int index){
    return this->datos[index];
}
/*
Pila& Pila::operator<<(int value){
    this->push(value);
    return *this;
}

Pila& Pila::operator>>(int& ref){
    ref = this->pop();
    return *this;
} */