#include "FactoryMethodObject.h"

#include <iostream>
#include <string>

using namespace std;

Entrega::Entrega(string detalle): detalles(detalle){}

void Entrega::printDetails(){
    cout<<this->detalles<<endl;
}

/* Tierra */
EntregaTierra::EntregaTierra(string detalle): Entrega(detalle){}
void EntregaTierra::printDetails(){
    Entrega::printDetails();
    cout<<"Entregando paquete en vehiculo"<<endl;
}

/* Mar */
EntregaMar::EntregaMar(string detalle): Entrega(detalle){}
void EntregaMar::printDetails(){
    Entrega::printDetails();
    cout<<"Entregando paquete en Barco"<<endl;
}
/* Aire */
EntregaAire::EntregaAire(string detalle): Entrega(detalle){}
void EntregaAire::printDetails(){
    Entrega::printDetails();
    cout<<"Entregando paquete en Avion"<<endl;
}