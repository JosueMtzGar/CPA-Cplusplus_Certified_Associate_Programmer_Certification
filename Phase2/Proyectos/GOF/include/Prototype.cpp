#include <iostream>
#include "Prototype.h"

using namespace std;
/* ===================
    Prototype 
*/
Prototype::Prototype(int valor): valor(valor) {}
Prototype::Prototype(){
    valor = 0;
}
int Prototype::getValor(){
    return this->valor;
}
void Prototype::setValor(int valor){
    this->valor = valor;
}
Prototype* Prototype::clone(){
    cout << "Clonando Prototype" << endl;
    Prototype* copia = new Prototype();
    copia->valor = this->valor;
    return copia;
}
void Prototype::operacion(){
    cout << "valor: "<<this->valor;
}
/* ===================
    Object 
*/
Object::Object(){
    this->setValor(0);
}
Object::Object(int valor): Prototype(valor){}
Prototype* Object::clone(){
    cout << "Clonando Object" << endl;
    Object *copia = new Object();
    copia->objVar = this->objVar;
    copia->setValor(this->getValor());
}
void Object::operacion(){
    cout << "ObjVar: " << objVar<<endl;
}
int Object::getObjVar(){

}
void Object::setObjVar(int valor){
    this->objVar = valor;
}