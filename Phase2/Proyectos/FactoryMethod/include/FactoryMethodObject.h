#ifndef _JOSUE_FACTORY_METHOD_OBJECT_
#define _JOSUE_FACTORY_METHOD_OBJECT_

#include <string>

using namespace std;

/* AbstractObject */
class Entrega{
    string detalles;
    public:
        Entrega(string);
        virtual void printDetails();
};

class EntregaTierra : public Entrega{
    public:
        EntregaTierra(string);
        virtual void printDetails();
};

class EntregaMar : public Entrega{
    public:
        EntregaMar(string);
        virtual void printDetails();
};

class EntregaAire : public Entrega{
    public:
        EntregaAire(string);
        virtual void printDetails();
};

#endif