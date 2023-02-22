#include <iostream>
#include <vector>

using namespace std;

class Persona{
    public:
        string nombre;
        int edad;
};

/* sublclase de persona */
class Empleado : public Persona{
    public:
        string turno;
        float sueldo;
};

/* subclase de persona */
class Pensionado : public Persona{
    public:
        int no_seguro;
};

int main(){
    Persona p;
    p.edad = 56;
    p.nombre = "Josue";

    Empleado e;
    e.nombre = "Maria";
    e.edad = 23;
    e.sueldo = 9000;
    e.turno = "Matutino";

    Pensionado pen;
    pen.nombre = "Miguel";
    pen.edad = 89;
    pen.no_seguro = 1248789374984;

    vector<Persona*> datos;
    datos.push_back(&p);
    datos.push_back(&e);
    datos.push_back(&pen); 
}