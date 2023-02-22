#include <iostream>
#include <vector>

using namespace std;

class Mascota{
    protected:
        string nombre;
    public:
        Mascota(string nombre): nombre(nombre){}
        virtual void hacerRudio(){
            cout << nombre << " : hace ruido " << endl;
        }
        string getNombre(){
            return nombre;
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
};

class Perro: public Mascota{
    public:
        Perro(string nombre): Mascota(nombre){}
        void hacerRuido(){
            cout << nombre << ": woof" << endl;
        }
        void morder(){
            cout << nombre << " muerde fuerte" << endl;
        }
};

class Gato: public Mascota{
    public:
        Gato(string nombre): Mascota(nombre){}
        void hacerRuido(){
            cout << nombre << ": miauu" << endl;
        }
};

class Persona{
    Mascota *mascota;
    public:
        void adquirirMascota(Mascota *mascota){
            this->mascota = mascota;
        }
        void mostrarMascota(){
            this->mascota->hacerRudio();
        }
        Mascota* getMascota(){
            return mascota;
        }
};

int main(){
    Mascota m("mascota");
    Perro p("max");
    Gato g("michi");

    /* g.hacerRudio();
    p.hacerRudio();
    m.hacerRudio(); */

    p.morder();

    Persona persona;
    persona.adquirirMascota(&p);
    persona.getMascota()->hacerRudio();
    Perro* perro = dynamic_cast<Perro*>(persona.getMascota());
    perro->morder();
}