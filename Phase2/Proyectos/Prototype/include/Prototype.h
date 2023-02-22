#ifndef _JOSUE_PROTOTYPE_
#define _JOSUE_PROTOTYPE_

class Prototype{
    int valor;
    public:
        Prototype* clone();
        Prototype(int);
        Prototype();
        int getValor();
        void setValor(int);
        virtual void operacion();
};

class Object : public Prototype{
    int objVar;
    public:
        Prototype* clone();
        Object(int);
        Object();
        virtual void operacion();
        int getObjVar();
        void setObjVar(int);
};

#endif