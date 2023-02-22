#include <iostream>
#include "Stretegy.h"

using namespace std;

int main(){
    GPS* gps = new GPS();

    cout << "En que transporte viajaras?" << endl;
    cout << "1) Vehiculo " << endl;
    cout << "2) Avion " << endl;
    cout << "3) Barco " << endl;
    int opc;
    cin >> opc;
    switch(opc){
        case 1:
            gps->setStrategy(new VehiculoStrategy());
        break;
        case 2:
            gps->setStrategy(new AvionStrategy());
        break;
        case 3:
            gps->setStrategy(new BarcoStrategy());
        break;
    }
    gps->doSomething();

    system("pause");

    return 0;
}