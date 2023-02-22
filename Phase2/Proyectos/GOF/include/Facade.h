#ifndef __MARCO_FACADE__
#define __MARCO_FACEDE__

#include "BridgeAbstraccion.h"

class Facade{
    private:
        int getSize();
        Color* getColor();
    public:
        /* 
            1) dibujar figura
            2) pedir color
            3) pausar
            4) limpiar pantalla 
        */
        void dibujaTriangulo();
        void dibujaRectangulo();
        void dibujaCuadrado();
        /* 
            1) dibujar todo
            2) pedir color
            3) pausar
            4) limpiar pantalla 
        */
        void dibujaTodo();
};

#endif