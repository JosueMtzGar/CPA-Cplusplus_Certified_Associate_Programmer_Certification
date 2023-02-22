#include "AbstractFactory.h"

Comida* AbstractFactory::crearComida(){
    return new Comida(1);
}
Aperitivo* AbstractFactory::crearAperitivo(){
    return new Aperitivo(1);
}
Postre* AbstractFactory::crearPostre(){
    return new Postre(1);
}

Comida* Mexican::crearComida(){
    return new MXComida(45);
}
Aperitivo* Mexican::crearAperitivo(){
    return new MXAperitivo(80);
}
Postre* Mexican::crearPostre(){
    return new MXPostre(80);
}

Comida* Italian::crearComida(){
    return new ITComida(180);
}
Aperitivo* Italian::crearAperitivo(){
    return new ITAperitivo(20);
}
Postre* Italian::crearPostre(){
    return new ITPostre(35);
}

Comida* Chinese::crearComida(){
    return new CNComida(50);
}
Aperitivo* Chinese::crearAperitivo(){
    return new CNAperitivo(30);
}
Postre* Chinese::crearPostre(){
    return new CNPostre(20);
}

Comida* Americana::crearComida(){
    return new USComida(100);
}
Aperitivo* Americana::crearAperitivo(){
    return new USAperitivo(40);
}
Postre* Americana::crearPostre(){
    return new USPostre(45);
}