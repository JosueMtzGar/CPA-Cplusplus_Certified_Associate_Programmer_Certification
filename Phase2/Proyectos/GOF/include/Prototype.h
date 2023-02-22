
#ifndef __MARCO_PROTOTYPE__
#define __MARCO_PROTOTYPE__

class Prototype{
    int valor;
    public:
        virtual Prototype* clone();
        Prototype(int);
        Prototype();
        int getValor();
        void setValor(int);
        virtual void operacion();
};

class Object : public Prototype{
    int objVar;
    public:
        virtual Prototype* clone();
        Object(int);
        Object();
        virtual void operacion();
        int getObjVar();
        void setObjVar(int);
};

#endif