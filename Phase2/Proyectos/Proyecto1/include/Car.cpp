#include "Car.h"

Car::Car(): llantas(0), puertas(0){};
int Car::getLlantas(){
    return llantas;
};
int Car::getPuertas(){
    return puertas;
};
void Car::setLlantas(int llantas){
    this->llantas = llantas;
};
void Car::setPuertas(int puertas){
    this->puertas = puertas;
};