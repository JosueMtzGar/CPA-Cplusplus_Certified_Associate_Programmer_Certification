#ifndef _JOSUE_ADAPTER_
#define _JOSUE_ADAPTER_

#include <iostream>

using namespace std;

class LuchadorArtesMarciales{
    string nombre;
    string estilo;
    public:
        LuchadorArtesMarciales(string, string);
        LuchadorArtesMarciales(string);
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

class Kickboxing: public LuchadorArtesMarciales{
    public:
        Kickboxing(string,string);
        virtual void luchar();
        virtual void golpear();
        virtual void patada();
};

class Boxeador{
    string nombre;
    public:
        string getNombre();
        void setNombre();
        Boxeador(string);
        void pelear();
        void golpe();
        void upperCut();
        void gancho();
};

class AdapterBoxeador: public LuchadorArtesMarciales{
    Boxeador* box;
    public:
        AdapterBoxeador(Boxeador* box);
        AdapterBoxeador(string nombre);

        virtual void luchar();
        virtual void golpear();
        virtual void patada();
        
};

#endif