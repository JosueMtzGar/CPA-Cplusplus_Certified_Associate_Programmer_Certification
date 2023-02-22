#include "BuilderDirector.h"
#include "BuilderEdificio.h"
#include "Builder.h"

Edificio* Director::crearCasa(){
    Builder b;
    b.agregarPiso();
    b.agregarCuarto(0);
    b.agregarCuarto(0);
    b.agregarCuarto(0);
    b.agregarCuarto(0);
    b.agregarBano(0);
    b.agregarEstacionamiento();
    return b.hacerEdificio();
}
Edificio* Director::crearOficina(){
    Builder b;
    b.agregarPiso();
    for(int i=0; i<8; i++)
        b.agregarCuarto(0);
    b.agregarBano(0);
    b.agregarBano(0);
    b.agregarEstacionamiento();
    return b.hacerEdificio();
}
Edificio* Director::crearHotel(){
    Builder b;
    for(int piso = 0; piso<5; piso++){
        b.agregarPiso();
        for(int i=0; i<16; i++){
            b.agregarCuarto(piso);
            b.agregarBano(piso);
        }
    }
    b.agregarEstacionamiento();
    return b.hacerEdificio();
}