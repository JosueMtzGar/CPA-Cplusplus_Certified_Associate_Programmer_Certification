#ifndef __MARCO_MEDIATOR__
#define __MARCO_MEDIATOR__

#include <string>
#include <vector>
using namespace std;

class Mediator{
    public:
        void notify(string);
};

class Input{
    string value;
    string field;
    protected:
        Mediator *mediator;
    public:
        bool visible;
        Input(string);
        string getValue();
        void setValue(string);
        string getField();
        virtual void printQuestion();
        virtual void readAnswer();
        void setMediator(Mediator*);
};

class Select: public Input{
    vector<string> opc;
    public:
        Select(string, vector<string>);
        void addOpc(string);
        void printQuestion();
        void readAnswer();
};


class Vehiculo: public Select{
    public:
        Vehiculo(string, vector<string>);
};
class Marca: public Input{
    public:
        Marca(string);
};
class Modelo: public Input{
    public:
        Modelo(string);
};
class Placa: public Input{
    public:
        Placa(string);
};
class Edad: public Input{
    public:
        Edad(string);
};
class Licencia: public Input{
    public:
        Licencia(string);
};

class Formulario: public Mediator{
    Vehiculo *vehiculo; // 1
    Modelo *modelo;
    Marca *marca;
    Placa *placa;
    Edad *edad; // 2
    Licencia *licencia;
    public:
        Formulario();
        void notify(string);
        void reactToVehiculo();
        void reactToEdad();
        void print();
};

#endif