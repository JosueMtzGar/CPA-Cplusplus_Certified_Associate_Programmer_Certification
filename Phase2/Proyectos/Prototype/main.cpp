#include <iostream>
#include "Prototype.h"

using namespace std;

int main(){
    Object p;
    
    p.setObjVar(10);
    Prototype* copia = p.clone();
    p.setObjVar(30);
    p.operacion();
    copia->operacion();

    p.setValor(10);
    cout << "P: " << p.getValor() << " Copia: " << copia->getValor() << endl;

    system("pause");
}