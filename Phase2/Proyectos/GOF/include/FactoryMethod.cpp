#include "FactoryMethod.h"

Entrega* FactoryMethod::crearObj(){
    return new Entrega("Entrega #1");
}
Entrega* FactoryMethod::operation(){
    Entrega * entrega = this->crearObj();
    entrega->printDetails();
    return entrega;
}

/* TIERRA */
Entrega* FactoryMethodTierra::crearObj(){
    return new EntregaTierra("Entregar en calle #1, cp: 13854, col. bla bla");
}
/* Mar */
Entrega* FactoryMethodMar::crearObj(){
    return new EntregaMar("Entregar en calle #1, cp: 13854, col. bla bla");
}
/* Aire */
Entrega* FactoryMethodAire::crearObj(){
    return new EntregaAire("Entregar en calle #1, cp: 13854, col. bla bla");
}