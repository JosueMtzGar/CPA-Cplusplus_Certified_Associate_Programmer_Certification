#include "Empleado.h"

using namespace std;

Empleado::Empleado(string nombre, float salario, int turno): salario(salario), turno(turno), Persona(nombre){}
Empleado::Empleado(string nombre, int turno): turno(turno), Persona(nombre){
    setTurno(turno);
}
Empleado::Empleado(){} 
void Empleado::setSalario(float salario){
    this->salario = salario;
}
float Empleado::getSalario(){
    return salario;
}
void Empleado::setTurno(int turno){
    this->turno = turno;
    switch(turno){
    case 1:
        strg_Turno = "Matutino"; 
        break;
    case 2:
        strg_Turno = "Vespertino";
        break;
    case 3:
        strg_Turno = "Nocturno";
        break;
    }
}
virtual void Empleado::print(){
    cout << "Nombre: " << getNombre() << endl;
    cout << "Turno: " << strg_Turno << endl;
    cout << "Salario: " << getSalario() << endl;
}