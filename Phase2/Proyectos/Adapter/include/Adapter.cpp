#include "Adapter.h"
#include <iostream>

using namespace std;

LuchadorArtesMarciales::LuchadorArtesMarciales(string nombre, string estilo): nombre(nombre), estilo(estilo){};
LuchadorArtesMarciales::LuchadorArtesMarciales(string nombre): nombre(nombre){};

string LuchadorArtesMarciales::getNombre(){
    return this->nombre;
};
string LuchadorArtesMarciales::getEstilo(){
    return this->estilo;
};
void LuchadorArtesMarciales::setNombre(string nombre){
    this->nombre = nombre;
};
void LuchadorArtesMarciales::setEstilo(string estilo){
    this->estilo = estilo;
};

void LuchadorArtesMarciales::luchar(){
    cout << "El peleador esta luchando" << endl;
};
void LuchadorArtesMarciales::golpear(){
    cout << "El peleador esta golpeando" << endl;
};
void LuchadorArtesMarciales::patada(){
    cout << "El peleador esta tirando patadas" << endl;
};

/* Taekwondo */
Taekwondo::Taekwondo(string nombre, string estilo): LuchadorArtesMarciales(nombre, estilo){};

void Taekwondo::luchar(){
    cout << "El peleador de Taekwondo esta luchando" << endl;
};
void Taekwondo::golpear(){
    cout << "El peleador de Taekwondo utliza golpe de dragon" << endl;
};
void Taekwondo::patada(){
    cout << "El peleador de Taekwondo utiliza patada giratoria" << endl;
};

/* Kickboxing */
Kickboxing::Kickboxing(string nombre, string estilo): LuchadorArtesMarciales(nombre, estilo){};

void Kickboxing::luchar(){
    cout << "El peleador de Kickboxing esta luchando" << endl;
};
void Kickboxing::golpear(){
    cout << "El peleador de Kickboxing utliza golpe bajo" << endl;
};
void Kickboxing::patada(){
    cout << "El peleador de Kickboxing utiliza patada recta" << endl;
};

/* Boxeador*/
Boxeador::Boxeador(string nombre): nombre(nombre){}
string Boxeador::getNombre(){
    return this->nombre;
};
void Boxeador::setNombre(){
    this->nombre = nombre;
};
void Boxeador::pelear(){
    cout << nombre << "hace una lcha intensa" << endl;
};
void Boxeador::golpe(){
    cout << nombre << "hace un golpe " << endl;
};
void Boxeador::upperCut(){
    cout << nombre << "hace hace un uppperCut " << endl;
};
void Boxeador::gancho(){
    cout << nombre << "hace un gancho" << endl;
};

/* Adapter */
AdapterBoxeador::AdapterBoxeador(Boxeador* box): box(box), LuchadorArtesMarciales(box->getNombre()){}
AdapterBoxeador::AdapterBoxeador(string nombre): LuchadorArtesMarciales(nombre){}
void AdapterBoxeador::luchar(){
    this->box->pelear();
};
void AdapterBoxeador::golpear(){
    this->box->gancho();
};
void AdapterBoxeador::patada(){
    this->box->upperCut();
};