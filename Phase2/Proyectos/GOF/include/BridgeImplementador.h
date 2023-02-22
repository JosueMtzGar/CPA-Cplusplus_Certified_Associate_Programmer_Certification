
#ifndef __MARCO_BRIDGE_IMPLEMENTADOR
#define __MARCO_BRIDGE_IMPLEMENTADOR
#include "BridgeAbstraccion.h"

class Figura{
    private:
        Color * color;
    public:
        Figura();
        void setColor(Color *);
        Color * getColor();
        virtual void dibujar();
};

class Cuadrado: public Figura{
    protected:
        int size;
    public:
        Cuadrado(int);
        virtual void dibujar();
};

class Rectangulo: public Figura{
    protected:
        int base, altura;
    public:
        Rectangulo(int, int);
        virtual void dibujar();
};

class Triangulo: public Figura{
    protected:
        int size;
    public:
        Triangulo(int);
        virtual void dibujar();
};


#endif