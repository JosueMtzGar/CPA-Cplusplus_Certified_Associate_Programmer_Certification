#include "AbstractFactoryObjects.h"

#ifndef __MARCO_ABSTRACT_FACTORY__
#define __MARCO_ABSTRACT_FACTORY__

class AbstractFactory{
    public:
        virtual Comida* crearComida();
        virtual Aperitivo* crearAperitivo();
        virtual Postre* crearPostre();
};

class Mexican: public AbstractFactory{
    public:
        virtual Comida* crearComida();
        virtual Aperitivo* crearAperitivo();
        virtual Postre* crearPostre();
};
class Italian: public AbstractFactory{
    public:
        virtual Comida* crearComida();
        virtual Aperitivo* crearAperitivo();
        virtual Postre* crearPostre();
};
class Chinese: public AbstractFactory{
    public:
        virtual Comida* crearComida();
        virtual Aperitivo* crearAperitivo();
        virtual Postre* crearPostre();
};
class Americana: public AbstractFactory{
    public:
        virtual Comida* crearComida();
        virtual Aperitivo* crearAperitivo();
        virtual Postre* crearPostre();
};

#endif