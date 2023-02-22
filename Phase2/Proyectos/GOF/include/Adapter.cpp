#include "Adapter.h"

#include <iostream>
#include <string>

using namespace std;

LuchadorArtesMarciales::LuchadorArtesMarciales(string nombre, string estilo): nombre(nombre), estilo(estilo){}

string LuchadorArtesMarciales::getNombre(){
    return this->nombre;
}
string LuchadorArtesMarciales::getEstilo(){
    return this->estilo;
}
void LuchadorArtesMarciales::setNombre(string nombre){
    this->nombre = nombre;
}
void LuchadorArtesMarciales::setEstilo(string estilo){
    this->estilo = estilo;
}

void LuchadorArtesMarciales::luchar(){
    cout<<"El peleador esta luchando"<<endl;
}
void LuchadorArtesMarciales::golpear(){
    cout<<"El peleador esta golpeando"<<endl;
}
void LuchadorArtesMarciales::patada(){
    cout<<"El peleador esta tirando patadas"<<endl;
}

/* Taekwondo */
void Taekwondo::luchar(){
    cout<<"El peleador de Taekwondo esta luchando"<<endl;
}
void Taekwondo::golpear(){
    cout<<"El peleador de Taekwondo utiliza golpe del dragon"<<endl;
}
void Taekwondo::patada(){
    cout<<"El peleador de Taekwondo utiliza patada giratoria"<<endl;
}
Taekwondo::Taekwondo(string nombre, string estilo): 
LuchadorArtesMarciales(nombre, estilo){}

/* Boxeador */
void Boxeador::pelear(){
    cout << nombre << ": hace una lucha intensa" << endl;
}
void Boxeador::golpe(){
    cout << nombre << ": hace un golpe fuerte" << endl;
}
void Boxeador::upperCut(){
    cout << nombre << ": hace upper cut" << endl;
}
void Boxeador::gancho(){
    cout << nombre << ": hace gancho" << endl;
}
Boxeador::Boxeador(string nombre): nombre(nombre){}
string Boxeador::getNombre(){
    return this->nombre;
}
void Boxeador::setNombre(string nombre){
    this->nombre = nombre;
}

/* Adaptador */
AdapterBoxeador::AdapterBoxeador(Boxeador *box): 
box(box), LuchadorArtesMarciales(box->getNombre(),"Boxeador"){}
AdapterBoxeador::AdapterBoxeador(string nombre): 
LuchadorArtesMarciales(nombre,"Boxeador"){
    this->box = new Boxeador(nombre);
}
void AdapterBoxeador::luchar(){
    this->box->pelear();
}
void AdapterBoxeador::golpear(){
    this->box->golpe();
}
void AdapterBoxeador::patada(){
    this->box->upperCut();
}