#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <string>
#include "Persona.h"

class Empleado : public Persona{
    private:
        float salario;
        int turno;
    public:
        std::string strg_Turno;
        Empleado(std::string, float, int);
        Empleado(std::string, int);
        Empleado(){};
        void setSalario(float);
        float getSalario();
        void setTurno(int);
        virtual void print();
};

#endif