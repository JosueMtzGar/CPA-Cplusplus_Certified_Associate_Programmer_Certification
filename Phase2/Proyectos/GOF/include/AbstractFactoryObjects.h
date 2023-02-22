#ifndef __MARCO_ABSTRACT_FACTORY_OBJECTS__
#define __MARCO_ABSTRACT_FACTORY_OBJECTS__

class Comida{
    private:
        float precio;
    public:
        Comida(float);
        virtual void comer();
        float getPrecio();
};
class Postre{
    private:
        float precio;
    public:
        Postre(float);
        virtual void comer();
        float getPrecio();
};
class Aperitivo{
    private:
        float precio;
    public:
        Aperitivo(float);
        virtual void comer();
        float getPrecio();
};

class MXComida: public Comida{
    public:
        MXComida(float);
        void comer();
};
class MXPostre: public Postre{
    public:
        MXPostre(float);
        void comer();
};
class MXAperitivo: public Aperitivo{
    public:
        MXAperitivo(float);
        void comer();
};

class ITComida: public Comida{
    public:
        ITComida(float);
        void comer();
};
class ITPostre: public Postre{
    public:
        ITPostre(float);
        void comer();
};
class ITAperitivo: public Aperitivo{
    public:
        ITAperitivo(float);
        void comer();
};

class CNComida: public Comida{
    public:
        CNComida(float);
        void comer();
};
class CNPostre: public Postre{
    public:
        CNPostre(float);
        void comer();
};
class CNAperitivo: public Aperitivo{
    public:
        CNAperitivo(float);
        void comer();
};

class USComida: public Comida{
    public:
        USComida(float);
        void comer();
};
class USPostre: public Postre{
    public:
        USPostre(float);
        void comer();
};
class USAperitivo: public Aperitivo{
    public:
        USAperitivo(float);
        void comer();
};

#endif