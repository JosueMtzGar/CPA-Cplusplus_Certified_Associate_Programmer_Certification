#ifndef _JOSUE_BRIDGE_IMPLEMENTADOR_
#define _JOSUE_BRIDGE_IMPLEMENTADOR_

class Figura{
    public:
        virtual void dibujar();
};

class FiguraVerde: public Figura{
    public:
        virtual void dibujar();
};

class Cuadrado: public Figura{
    int size;
    public:
        Cuadrado(int);
        virtual void dibujar();
};

#endif