#include "BridgeImplementador.h"

#include <iostream>

using namespace std;

Figura::Figura(){
    color = nullptr;
}

void Figura::dibujar(){
    if(this->getColor() != nullptr){
        this->getColor()->applyColor();
    }
    cout << "." << endl;
}

void Figura::setColor(Color * color){
    this->color = color;
}

Color* Figura::getColor(){
    return this->color;
}

Cuadrado::Cuadrado(int size): size(size){}
void Cuadrado::dibujar(){
    if(this->getColor() != nullptr){
        this->getColor()->applyColor();
    }
    for(int i = 0; i< size; i++){
        for(int j = 0; j< size; j++){
            cout << "# ";
        }
        cout << endl;
    }
}

Rectangulo::Rectangulo(int base, int altura): base(base), altura(altura){}
void Rectangulo::dibujar(){
    if(this->getColor() != nullptr){
        this->getColor()->applyColor();
    }
    for(int i = 0; i< altura; i++){
        for(int j = 0; j< base; j++){
            cout << "# ";
        }
        cout << endl;
    }
}

Triangulo::Triangulo(int size): size(size){}
void Triangulo::dibujar(){
    if(this->getColor() != nullptr){
        this->getColor()->applyColor();
    }
    for(int i = 0; i< size; i++){
        for(int j = i; j< size; j++){
            cout << "# ";
        }
        cout << endl;
    }
}

