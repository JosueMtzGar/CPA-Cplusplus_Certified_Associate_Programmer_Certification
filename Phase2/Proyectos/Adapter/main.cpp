#include <iostream>
#include "Adapter.h"

using namespace std;

void luchar(LuchadorArtesMarciales* player1, LuchadorArtesMarciales* player2){
    cout << "Jugador 1: " << player1->getNombre() << endl;
    cout << "vs Jugador 2: " << player2->getNombre() << endl;
    player1->golpear();
    player2->patada();
    player1->luchar();
    player2->luchar();
}

int main(){
    Taekwondo* tae1 = new Taekwondo("Juan Cena", "Libre");
    Taekwondo* tae2 = new Taekwondo("Pacquia", "Libre");
    AdapterBoxeador* box2 = new AdapterBoxeador("Julio");
    Boxeador* box1 = new Boxeador("Jose");
    luchar(tae1, box2);

    /* LuchadorArtesMarciales l("Juan", "Libre");
    cout << "Luchador: " << l.getNombre() << endl;
    l.golpear();
    l.luchar();
    l.patada();
    cout << endl;

    LuchadorArtesMarciales* l2 = new Taekwondo("Jose", "Normal");
    cout << "Luchador: " << l2->getNombre() << endl;
    l2->golpear();
    l2->luchar();
    l2->patada();
    cout << endl;

    LuchadorArtesMarciales* l3 = new Kickboxing("Pepe", "Normal");
    cout << "Luchador: " << l3->getNombre() << endl;  
    l3->golpear();
    l3->luchar();
    l3->patada(); */



    system("pause");
    return 0;
}