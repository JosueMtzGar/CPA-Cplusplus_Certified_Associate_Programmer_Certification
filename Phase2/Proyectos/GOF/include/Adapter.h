#ifndef __MARCO_ADAPTER__
#define __MARCO_ADAPTER__

#include <string>

using namespace std;


/* Clase abstracta de luchadores */
class LuchadorArtesMarciales{
    string nombre;
    string estilo;
    public:
        LuchadorArtesMarciales(string, string);
        string getNombre();
        string getEstilo();
        void setNombre(string nombre);
        void setEstilo(string estilo);

        virtual void luchar();
        virtual void golpear();
        virtual void patada();
};

class Taekwondo: public LuchadorArtesMarciales{
    public:
        Taekwondo(string, string);
        virtual void luchar();
        virtual void golpear();
        virtual void patada();
};
/*
class Kickboxing: public LuchadorArtesMarciales{
    public:
        virtual void luchar();
        virtual void golpear();
        virtual void patada();
};
*/

class Boxeador{
    string nombre;
    public:
        string getNombre();
        void setNombre(string);
        Boxeador(string);
        void pelear();
        void golpe();
        void upperCut();
        void gancho();
};

class AdapterBoxeador: public LuchadorArtesMarciales{
    Boxeador* box;
    public:
        AdapterBoxeador(Boxeador *box);
        AdapterBoxeador(string nombre);

        virtual void luchar();
        virtual void golpear();
        virtual void patada();
};



#endif