#include <iostream>

using namespace std;

enum dia_semana {DOMINGO, LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO};

string dia_a_texto(int dia){
    switch (dia){
    case DOMINGO:
        return string("Domingo");
        break;
    case LUNES:
        return string("Lunes");
        break;
    case MARTES:
        return string("Martes");
        break;
    case MIERCOLES:
        return string("Miercoles");
        break;
    case JUEVES:
        return string("Jueves");
        break;
    case VIERNES:
        return string("Viernes");
        break;
    case SABADO:
        return string("Sabado");
        break;
    default:
        return string("Ese dia no existe");
        break;
    }
};

dia_semana operator+(dia_semana izq, int der){
    int a = izq;
    dia_semana dia_nuevo = static_cast<dia_semana>((a+der)%7);
    return dia_nuevo;
}

int main(){
    dia_semana dia = static_cast<dia_semana>(0);
    cout << dia_a_texto(dia + 1234);
}