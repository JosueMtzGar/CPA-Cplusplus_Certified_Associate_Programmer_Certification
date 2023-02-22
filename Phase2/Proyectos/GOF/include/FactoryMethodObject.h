#ifndef __MARCO_FACTORY_METHID_OBJECT__
#define __MARCO_FACTORY_METHID_OBJECT__

#include <string>
using namespace std;

/* AbstractObject */
class Entrega{
    string detalles;
    public:
        Entrega(string);
        virtual void printDetails();
};

class EntregaTierra: public Entrega{
    public:
        EntregaTierra(string);
        virtual void printDetails();
};
class EntregaMar: public Entrega{
    public:
        EntregaMar(string);
        virtual void printDetails();
};
class EntregaAire: public Entrega{
    public:
        EntregaAire(string);
        virtual void printDetails();
};

#endif