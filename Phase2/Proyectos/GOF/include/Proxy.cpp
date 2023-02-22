#include "Proxy.h"
#include <iostream>
#include <string>
using namespace std;

string InterfazServicio::getLibro(int id){
    cout << "Consultando libro "<< id << endl;
    return "";
}
int InterfazServicio::createLibro(string nombre){
    cout << "Creando libro "<<nombre<<endl;
    return 0;
}
bool InterfazServicio::borrarLibro(int id){
    cout << "Borrando libro "<< id<< endl;
    return true;
}
InterfazServicio::~InterfazServicio(){
    cout << "Servicio terminado" << endl;
}

string Servicio::getLibro(int id){
    if(libros.size() > id && id >= 0)
        return libros[id];
    else
        return "";
}
int Servicio::createLibro(string nombre){
    libros.push_back(nombre);
    return libros.size()-1;
}
bool Servicio::borrarLibro(int id){
    if(libros.size() > id && id >= 0){
        libros[id] = "";
        return true;
    }
    return false;
}
Servicio::~Servicio(){
    cout << "Conexion apagada" << endl;
}

Proxy::Proxy(){
    servicio = new Servicio();
}

string Proxy::getLibro(int id){
    string res = servicio->getLibro(id);
    log.push_back("El usuario consulta: "+res);
    return res;
}
int Proxy::createLibro(string nombre){
    int res = servicio->createLibro(nombre);
    log.push_back("El usuario registra: "+nombre);
    return res;
}
bool Proxy::borrarLibro(int id){
    string nombre = servicio->getLibro(id);
    bool res = servicio->borrarLibro(id);
    log.push_back("El usuario borro: "+nombre);
    return res;
}

Proxy::~Proxy(){
    delete servicio;
    for(int i=0; i<log.size(); i++ ){
        cout << log[i] << endl;
    }
}