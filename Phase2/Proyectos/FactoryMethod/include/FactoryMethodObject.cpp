#include "FactoryMethodObject.h"
#include <iostream>

using namespace std;

Entrega::Entrega(string detalle) : detalles(detalle){};
void Entrega::printDetails(){
    cout << this->detalles << endl;
}

/* TIERRA */
EntregaTierra::EntregaTierra(string detalle): Entrega(detalle){}
void EntregaTierra::printDetails(){
    Entrega::printDetails();
    cout << "Entregando paquete en vehiculo" << endl;
}

/* MAR */
EntregaMar::EntregaMar(string detalle): Entrega(detalle){}
void EntregaMar::printDetails(){
    Entrega::printDetails();
    cout << "Entregando paquete en lancha" << endl;
}

/* AIRE */
EntregaAire::EntregaAire(string detalle): Entrega(detalle){}
void EntregaAire::printDetails(){
    Entrega::printDetails();
    cout << "Entregando paquete en avion" << endl;
}