#include <iostream>
#include <vector>

using namespace std;

class Mascota{
    protected:
        string nombre;
    public:
        Mascota(string nombre) : nombre(nombre){}
        virtual void hacerRuido(){
            cout << "La mascota " << nombre << " esta haciendo ruido" << endl;
        }
};

class Perro: public Mascota{
    public:
        Perro(string nombre) : Mascota(nombre){}
        void hacerRuido(){
            cout << "El perro " << nombre << " ladra" << endl;
        }
};

class Gato: public Mascota{
    public:
        Gato(string nombre) : Mascota(nombre){}
        void hacerRuido(){
            cout << "El gato " << nombre << " maulla" << endl;
        }
};

int main(){
    vector<Mascota*> mascotas(3);

    Mascota *m = new Mascota("Iguano");
    Perro *p = new Perro("Tequila");
    Gato *g = new Gato("Max");

    mascotas[0] = m;
    mascotas[1] = p;
    mascotas[2] = g;

    for(int i = 0; i < mascotas.size(); i++){
        mascotas[i]->hacerRuido();
    }

    delete m, p, g;
}