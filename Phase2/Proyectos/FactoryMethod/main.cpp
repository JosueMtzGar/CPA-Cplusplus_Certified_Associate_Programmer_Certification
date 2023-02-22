#include <iostream>
#include "FactoryMedthod.h"
#include "FactoryMethodObject.h"

using namespace std;

void hacerEntrega(FactoryMethod* factory){
    factory->operation();
}

int main(){
    FactoryMethod* factory = new FactoryMethodAire();
    hacerEntrega(factory);
    system("pause");

    delete factory;
    return 0;
}