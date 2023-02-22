

#include "Command.h"

#include <iostream>
using namespace std;

void Command::run(){
    cout << ">> Un commando generico" << endl;
}

Boton::Boton(string nombre): nombre(nombre){
    action = nullptr;
}
void Boton::setCommand(Command* command){
    this->action = command;
}
void Boton::click(){
    if(this->action != nullptr)
        this->action->run();
}
string Boton::getNombre(){
    return this->nombre;
}

Menu::Menu(vector<Boton *> botones): botones(botones){}
void Menu::printMenu(){
    cout << "Seleccione una opcion"<<endl;
    for(int i = 0; i<botones.size();i++){
        cout << i+1 << ")"<< botones[i]->getNombre() << endl;
    }
    seleccionar();
}
void Menu::seleccionar(){
    int opc;
    cin >> opc;
    if( opc -1 < botones.size() && opc > 0 ){
        botones[opc-1]->click();
    }
}

void Copy::run(){
    cout << ">> Copiando algo" << endl;
}
void Paste::run(){
    cout << ">> Pegando algo" << endl;
}
void Cut::run(){
    cout << ">> Cortando algo" << endl;
}
void Save::run(){
    cout << ">> Guardando algo" << endl;
}
void Open::run(){
    cout << ">> Abriendo algo" << endl;
}