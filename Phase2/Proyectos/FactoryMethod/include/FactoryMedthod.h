#ifndef _JOSUE_FACTORY_METHOD_
#define _JOSUE_FACTORY_METHOD_

#include "FactoryMethodObject.h"

class FactoryMethod{
    public:
        virtual Entrega* crearObj();
        void operation();
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