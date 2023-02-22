#ifndef PERSONSA_H
#define PERSONSA_H
#include <iostream>

class Persona{
    private:
        string nombre;
    public:
        Persona(string);
        Persona();
        void setNombre(string);
        string getNombre();
};

#endif