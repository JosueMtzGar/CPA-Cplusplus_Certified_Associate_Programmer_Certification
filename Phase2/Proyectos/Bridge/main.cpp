#include <iostream>
#include "BridgeImplementador.h"

using namespace std;

void dibujar(Figura* figura){
    figura->dibujar();
}
int main(){
    FiguraVerde* figura = new FiguraVerde();

    dibujar(figura);

    system("pause");
    return 0;
}