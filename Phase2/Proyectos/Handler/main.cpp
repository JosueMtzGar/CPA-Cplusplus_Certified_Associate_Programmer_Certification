#include <iostream>
#include <vector>

#include "Chain.h"

using namespace std;

void cliente(){
    Producto* prod1 = new Producto("Bateria", 10, false); 
    Producto* prod2 = new Producto("Reloj", 1, true); 
    Producto* prod3 = new Producto("Manzana", 20, false); 

    Usuario* user1 = new Usuario("usr1", "pass", 1);
    Usuario* user2 = new Usuario("usr2", "pass", 2);
    Usuario* user3 = new Usuario("admin", "admin", 1);

    Handler* h = new Handler();
    Handler* val1 = new Auth();
    h->setHandler(val1);

    /* Handler* val1 = new 
    Handler* val3 = new ProDisp();
    val */

    if(h->validate(user3, prod3)){
        cout << "Es un usuario y producto valido " << endl;
    }
    else{
        cout << "No es usuario y prducto valido" << endl;
    }
}

int main(){

    cliente();

    system("pause");
    return 0;
}