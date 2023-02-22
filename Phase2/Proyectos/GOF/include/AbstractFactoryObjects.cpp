#include "AbstractFactoryObjects.h"
#include <iostream>
using namespace std;

/* Clases abstractas */
Comida::Comida(float precio): precio(precio){

}
void Comida::comer(){
    cout<<"Comiendo Comida abstracta"<<endl;
}
float Comida::getPrecio(){
    return this->precio;
}
Postre::Postre(float precio): precio(precio){

}
void Postre::comer(){
    cout<<"Comiendo Postre abstracta"<<endl;
}
float Postre::getPrecio(){
    return this->precio;
}
Aperitivo::Aperitivo(float precio): precio(precio){

}
void Aperitivo::comer(){
    cout<<"Comiendo Aperitivo abstracta"<<endl;
}
float Aperitivo::getPrecio(){
    return this->precio;
}

/* Clases Mexico */
MXAperitivo::MXAperitivo(float precio): Aperitivo(precio){}
MXComida::MXComida(float precio): Comida(precio){}
MXPostre::MXPostre(float precio): Postre(precio){}
void MXAperitivo::comer(){
    cout << "Comiendo quesadilla" << endl;
}
void MXComida::comer(){
    cout << "Comiendo Unos tacos" << endl;
}
void MXPostre::comer(){
    cout << "Comiendo Arroz con leche" << endl;
}

/* Clases Italiano */
ITComida::ITComida(float precio): Comida(precio){}
ITAperitivo::ITAperitivo(float precio): Aperitivo(precio){}
ITPostre::ITPostre(float precio): Postre(precio){}
void ITComida::comer(){
    cout << "Comiendo pizza" << endl;
}
void ITAperitivo::comer(){
    cout << "Comiendo pan de ajo" << endl;
}
void ITPostre::comer(){
    cout << "Comiendo Helado" << endl;
}

/* Clases Chinese */
CNComida::CNComida(float precio): Comida(precio){}
CNAperitivo::CNAperitivo(float precio): Aperitivo(precio){}
CNPostre::CNPostre(float precio): Postre(precio){}
void CNComida::comer(){
    cout << "Comiendo pollo rojo" << endl;
}
void CNAperitivo::comer(){
    cout << "Comiendo arroz" << endl;
}
void CNPostre::comer(){
    cout << "Comiendo Pan dulce" << endl;
}

/* Clases American */
USComida::USComida(float precio): Comida(precio){}
USAperitivo::USAperitivo(float precio): Aperitivo(precio){}
USPostre::USPostre(float precio): Postre(precio){}
void USComida::comer(){
    cout << "Comiendo Hamburguesa doble con tocino" << endl;
}
void USAperitivo::comer(){
    cout << "Comiendo papas fritas" << endl;
}
void USPostre::comer(){
    cout << "Comiendo Pastel" << endl;
}