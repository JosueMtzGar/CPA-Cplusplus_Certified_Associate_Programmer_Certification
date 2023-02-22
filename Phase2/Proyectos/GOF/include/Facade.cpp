#include <iostream>
#include "Facade.h"
#include "BridgeImplementador.h"
#include "BridgeAbstraccion.h"

using namespace std;

int Facade::getSize(){
    int size = 0;
    while(size <= 0){
        cout << "Introducir size: "<<endl;
        cin >> size;
    }
    return size;
}
Color* Facade::getColor(){
    int color = 0;
    while( !(color>0 && color<5) ){
        system("cls");
        cout << "Introducir numero de color:"<<endl;
        cout << "1) Rojo"<<endl;
        cout << "2) Azul"<<endl;
        cout << "3) Verde"<<endl;
        cout << "4) Blanco"<<endl;
        cin >> color;
    }
    switch(color){
        case 1:
            return new Red();
        case 2:
            return new Blue();
        case 3:
            return new Green();
        default:
            return new Color();
    }
}

void Facade::dibujaTriangulo(){
    Triangulo *t = new Triangulo(getSize());
    system("cls");
    t->setColor(getColor());
    t->dibujar();
    system("pause");
    delete t;
}

void Facade::dibujaRectangulo(){
    system("cls");
    int base = 0, altura = 0;
    cout << "Base: " << endl;
    base = getSize();
    cout << "altura: " <<endl;
    altura = getSize();
    Rectangulo *t = new Rectangulo(base, altura);
    t->setColor(getColor());
    t->dibujar();
    system("pause");
    delete t;
}

void Facade::dibujaCuadrado(){
    system("cls");
    Cuadrado *t = new Cuadrado(getSize());
    t->setColor(getColor());
    t->dibujar();
    system("pause");
    delete t;
}

void Facade::dibujaTodo(){
    system("cls");
    Cuadrado *c = new Cuadrado(getSize());
    int base = 0, altura = 0;
    cout << "Base: " << endl;
    base = getSize();
    cout << "altura: " <<endl;
    altura = getSize();
    Rectangulo *r = new Rectangulo(base, altura);
    Triangulo *t = new Triangulo(getSize());
    t->setColor(getColor());

    c->dibujar();
    t->dibujar();
    r->dibujar();
    system("pause");
    delete c;
    delete r;
    delete t;
}