#include <iostream>
#include "Composite1.h"
using namespace std;

void getSize(Component* c){
    cout << "El peso total de " << c->getNombre() << " es " << c->getSize() << " bits." << endl;
}

int main(){
    Carpeta* discoC = new Carpeta("c:");
    discoC->addHijo(new Archivo(1000, "Test", "txt"));
    
    Carpeta* programFiles = new Carpeta("Program File");
    programFiles->addHijo(new Archivo(60000, "C++", ".exe"));

    discoC->addHijo(programFiles);

    getSize(discoC); //61'000

    getSize(programFiles); //60'000
    /* 
    c:
        test.txt
        program files
            c++.exe
    
    */
    system("pause");
    return 0;
}