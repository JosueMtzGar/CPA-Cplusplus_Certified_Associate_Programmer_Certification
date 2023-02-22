#ifndef __MARCO_FACTORY_METHID__
#define __MARCO_FACTORY_METHID__

#include "FactoryMethodObject.h"

class FactoryMethod{
    public:
        virtual Entrega* crearObj();
        Entrega* operation();
};

class FactoryMethodTierra: public FactoryMethod{
    public:
        virtual Entrega* crearObj();
};

class FactoryMethodMar: public FactoryMethod{
    public:
        virtual Entrega* crearObj();
};

class FactoryMethodAire: public FactoryMethod{
    public:
        virtual Entrega* crearObj();
};

#endif