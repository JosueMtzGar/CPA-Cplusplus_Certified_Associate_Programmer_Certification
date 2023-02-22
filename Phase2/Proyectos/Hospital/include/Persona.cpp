#include <iostream>
#include "Persona.h"

using namespace std;

Persona::Persona(string nombre) : nombre(nombre){}
Persona::Persona(){}
void Persona::setNombre(string nombre){
    this->nombre = nombre;
}
string Persona::getNombre(){
    return nombre;
}