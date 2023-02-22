#ifndef __MARCO_BUILDER__
#define __MARCO_BUILDER__

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