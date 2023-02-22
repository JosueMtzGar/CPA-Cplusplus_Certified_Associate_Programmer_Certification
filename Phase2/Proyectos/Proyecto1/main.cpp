#include <iostream>
#include "Car.h"

using namespace std;

int main(){
    Car c;
    c.setLlantas(4);

    cout << "Hola Mundo" << endl;
    cout << c.getLlantas() << endl;
    return 0;
}