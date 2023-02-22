#include "FactoryMedthod.h"

Entrega* FactoryMethod::crearObj(){
    return new Entrega("Entrega #1");
}
void FactoryMethod::operation(){
    Entrega* entrega = this->crearObj();
    entrega->printDetails();
}

/* TIERRA */
Entrega* FactoryMethodTierra::crearObj(){
    return new EntregaTierra("Entregar en calle #1, cp:: 12498, col. bla bla bla");
}

Entrega* FactoryMethodMar::crearObj(){
    return new EntregaMar("Producto entregado por mar");
}

Entrega* FactoryMethodAire::crearObj(){
    return new EntregaAire("Producto entregado por aire");
}