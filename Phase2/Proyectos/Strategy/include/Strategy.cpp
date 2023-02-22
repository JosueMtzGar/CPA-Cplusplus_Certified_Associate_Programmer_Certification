#include "Stretegy.h"
#include <iostream>

using namespace std;

void Strategy::execute(string puntoA, string puntoB){
    cout << "Estrategia no definida" << endl;
}

void VehiculoStrategy::execute(string puntoA, string puntoB){
    cout << "Para llegar a " << puntoB << "desde el " << puntoA << " utilizando un vehiculo necestias tener  vehiculo " << endl;
}

void AvionStrategy::execute(string puntoA, string puntoB){
    cout << "Para llegar a " << puntoB << " desde el " << puntoA << "uitilizando un avion necesitas ir al aeropuerto" << endl;
}

void BarcoStrategy::execute(string puntoA, string puntoB){
    cout << "Para llegar a " << puntoB << " desde el " << puntoA << " utilizando un barco ncesitas ir al muelle " << endl;
}

GPS::GPS(){
    strategy = nullptr;
}

void GPS::setStrategy(Strategy* strategy){
    delete this->strategy;
    this->strategy = strategy;
}

void GPS::doSomething(){
    string a, b;
    cout << "Introducir punto A" << endl;
    cin >> a;
    cout << "Introducir punto B" << endl;
    cin >> b;
    this->strategy->execute(a, b);
}

GPS::~GPS(){
    delete this->strategy;
}

