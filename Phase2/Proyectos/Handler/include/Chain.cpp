#include "Chain.h"
#include <iostream>

using namespace std;

Producto::Producto(string nombre, int cantidad, bool visible):
nombre(nombre), cantidad(cantidad), visible(visible){};
string Producto::getNombre(){
    return this->nombre;
};
int Producto::getCantidad(){
    return this->cantidad;
};
bool Producto::isVisible(){
    return this->visible;
};

Usuario::Usuario(string usuario, string contrasena, int rol):
usuario(usuario), contrasena(contrasena), rol(rol){};
string Usuario::getUsuario(){
    return this->usuario;
};
string Usuario::getContrasena(){
    return this->contrasena;
};
int Usuario::getRol(){
    return this->rol;
};


Handler::Handler(){
    next = nullptr;
};
void Handler::setHandler(Handler* handler){
    next = handler;
};
bool Handler::validate(Usuario* usr, Producto* prod){
    cout << "Validacion siguinte" << endl;
    if(next == nullptr)
        return true;
    else
        return next->validate(usr, prod);
};

bool Auth::validate(Usuario* usr, Producto* prod){
    cout << "Validando auth" << endl;
    if(usr->getContrasena() == "pass"){
        return Handler::validate(usr,prod);
    }
    else{
        return false;
    }
};
