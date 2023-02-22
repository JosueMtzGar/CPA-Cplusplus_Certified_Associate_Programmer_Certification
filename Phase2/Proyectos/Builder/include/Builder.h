#ifndef _JOSUE_BUILDER_
#define _JOSUE_BUILDER_

#include "BuilderEdificio.h"

class Builder{
    Edificio *ed;
    public:
        Builder();
        void agregarCuarto(int piso);
        void agregarBano(int piso);
        void agregarPiso();
        void agregarEstacionamiento();
        void reset();
        Edificio* hacerEdificio();
};

#endif