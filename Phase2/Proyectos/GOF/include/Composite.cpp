#include "Composite.h"

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string Component::getNombre(){
    return this->nombre;
}
void Component::setNombre(string nombre){
    this->nombre = nombre;
}
int Component::getSize(){
    return this->size;
}
void Component::setSize(int size){
    this->size = size;
}
void Component::tree(){
    cout << this->nombre;
}

Archivo::Archivo(int size, string nombre, string ext){
    this->setSize(size);
    this->setNombre(nombre);
    this->ext = ext;
}
void Archivo::tree(){
    cout << "{";
    Component::tree(); // {test.txt}
    cout << "." << ext << "}";
}

Carpeta::Carpeta(string nombre){
    this->setSize(0);
    this->setNombre(nombre);
}
void Carpeta::addHijo(Component * c){
    this->hijos.push_back(c);
}
Component * Carpeta::getHijo(int pos){
    return this->hijos[pos];
}
void Carpeta::removeHijo(int pos){
    cout << "Se removio el hijo" << endl;
}
int Carpeta::getSize(){
    int t_size = 0;
    for(int i = 0; i<hijos.size(); i++){
        t_size += hijos[i]->getSize();
    }
    return t_size;
}
void Carpeta::tree(){
    cout << "[\"";
    Component::tree();
    cout << "\"";
    for(int i = 0; i<hijos.size(); i++){
        hijos[i]->tree();
        cout << ", ";
    }
    cout << "]";
}