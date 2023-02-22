#include <iostream>
#include "BuilderDirector.h"
#include "BuilderEdificio.h"

using namespace std;

int main(){

    Director d;

    Edificio *casa =d.crearCasa();
    cout << "CASA" << endl;
    cout << (*casa) << endl;

    Edificio *hotel = d.crearHotel();
    cout << "HOTEL" <<endl;
    cout << (*hotel) << endl;

    Edificio *oficiona = d.crearOficina();
    cout << "OFICINA" << endl;
    cout << (*oficiona) << endl;

    system("pause");

    delete casa;
    delete hotel;
    delete oficiona;

    return 0;
}