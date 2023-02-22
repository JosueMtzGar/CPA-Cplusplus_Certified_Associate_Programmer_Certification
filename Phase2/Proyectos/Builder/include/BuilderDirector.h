#ifndef _JOSUE_BUILDER_DIRECTOR
#define _JOSUE_BUILDER_DIRECTOR

#include "BuilderEdificio.h"

class Director{
    public:
        Edificio* crearCasa();
        Edificio* crearOficina();
        Edificio* crearHotel();
};

#endif