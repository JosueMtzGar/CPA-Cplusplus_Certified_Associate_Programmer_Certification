#include "Builder.h"

Builder::Builder(){
    this->ed = new Edificio;
};
void Builder::agregarCuarto(int piso){
    this->ed->agregarPropiedades(piso, "[Cuarto]");
};
void Builder::agregarBano(int piso){
    this->ed->agregarPropiedades(piso, "[Bano]");
};
void Builder::agregarPiso(){
    this->ed->agregarPiso("");
};
void Builder::agregarEstacionamiento(){
    this->ed->agregarPropiedades(0, "[Estacionamiento]");
};
void Builder::reset(){
    this->ed = new Edificio;
};
Edificio* Builder::hacerEdificio(){
    return this->ed;
};