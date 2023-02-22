#include <iostream>
#include "Singleton.h"
using namespace std;

Singleton::Singleton(int valor): valor(valor){
    cout<<"Se ha creado el Singleton"<<endl;
}
Singleton::Singleton(Singleton& other){}

int Singleton::getValor(){
    return this->valor;
}

Singleton* Singleton::getInstance(int valor=0){
    if(instance == nullptr){
        instance = new Singleton(valor);
    }
    return instance;
}

Singleton *Singleton::instance = nullptr;