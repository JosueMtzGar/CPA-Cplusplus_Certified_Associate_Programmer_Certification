
#ifndef __MARCO_BUILDER_DIRECTOR__
#define __MARCO_BUILDER_DIRECTOR__

#include "BuilderEdificio.h"

class Director{

    public:
        Edificio* crearCasa();
        Edificio* crearOficina();
        Edificio* crearHotel();
};

#endif