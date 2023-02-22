#include "Mediator.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Input::Input(string field): field(field){
    visible = true;
}
string Input::getValue(){
    return value;
}
void Input::setValue(string value){
    this->value = value;
}
string Input::getField(){
    return field;
}
void Input::printQuestion(){
    cout << "Introducir "<< field << ":" << endl;
}
void Input::readAnswer(){
    cin >> value;
    this->mediator->notify(this->field);
}
void Input::setMediator(Mediator * mediator){
    this->mediator = mediator;
}


Select::Select(string field, vector<string> opc): Input(field), opc(opc){}
void Select::addOpc(string opc){
    this->opc.push_back(opc);
}
void Select::printQuestion(){
    cout << "Seleccione un " << this->getField() << ":" << endl;
    for( int i =0; i<opc.size(); i++){
        cout << (i+1) << ") " + opc[i] << endl;
    }
}
void Select::readAnswer(){
    int eleccion = 0; 
    while(!(eleccion>0 && eleccion<=opc.size())){
        cin >> eleccion; // 1
        this->setValue(opc[eleccion]);
    }
    this->mediator->notify(this->getField());
}

Vehiculo::Vehiculo(string field, vector<string> opc): Select(field, opc){}
Marca::Marca(string field): Input(field){
    visible = true;
}
Modelo::Modelo(string field): Input(field){
    visible = false;
}
Placa::Placa(string field): Input(field){
    visible = false;
}
Edad::Edad(string field): Input(field){}
Licencia::Licencia(string field): Input(field){
    visible = false;
}

void Mediator::notify(string componente){}

Formulario::Formulario(){
    vehiculo = new Vehiculo("Vehiculo", {"Carro", "Moto", "Bicicleta", "Patines"});
    vehiculo->setMediator(this);
    modelo = new Modelo("Modelo");
    modelo->setMediator(this);
    marca = new Marca("Marca");
    marca->setMediator(this);
    placa = new Placa("Placa");
    placa->setMediator(this);
    edad = new Edad("Edad");
    edad->setMediator(this);
    licencia = new Licencia("Licencia");
    licencia->setMediator(this);
}
void Formulario::notify(string componente){
    if(componente == "Vehiculo")
        this->reactToVehiculo();
    if(componente == "Edad")
        this->reactToEdad();
}
void Formulario::reactToVehiculo(){
    cout << "Selecciono un vehiculo"<<endl;
}
void Formulario::reactToEdad(){
    cout << "Selecciono edad"<<endl;
}
void Formulario::print(){
    if(vehiculo->visible){
        vehiculo->printQuestion();
        vehiculo->readAnswer();
    }
    if(marca->visible)
        marca->printQuestion();
    if(modelo->visible)
        modelo->printQuestion();
    if(placa->visible)
        placa->printQuestion();
    if(edad->visible){
        edad->printQuestion();
        edad->readAnswer();
    }
    if(licencia->visible)
        licencia->printQuestion();
}