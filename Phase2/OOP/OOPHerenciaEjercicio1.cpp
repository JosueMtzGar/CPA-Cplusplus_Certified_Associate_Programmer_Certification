#include <iostream>
#include <vector>

using namespace std;

class Herramienta{
    private:
        string marca;
    public:
        virtual void utilizar(){
            cout << "Utilizando herramienta marca " << marca << endl;
        }
    Herramienta(string marca) : marca(marca){}
    string getMarca(){
        return marca;
    }
};

class Martillo: public Herramienta{
    public:
        int tamano;
        Martillo(string  marca, int tamano) : Herramienta(marca), tamano(tamano){}
        Martillo(): Herramienta("Basic"), tamano(10){}
        void utilizar(){
            cout << "Utilizando martillo marca " << getMarca() << " con tamano " << tamano << endl;
        }
};

class Taladro: public Herramienta{
    public:
        int potencia;
        Taladro(string  marca, int potencia) : Herramienta(marca), potencia(potencia){}
        Taladro(): Herramienta("Basic"), potencia(100){}
        void utilizar(){
            cout << "Utilizando taladro marca " << getMarca() << " con potencia " << potencia << endl;
        }
};

int main(){
    vector<Herramienta*> caja;
    Martillo martilloH("Hammer",30);
    Martillo martilloB;
    Taladro taladro;
    caja.push_back(&martilloH);
    caja.push_back(&martilloB);
    caja.push_back(&taladro);

    for(int i =0; i < caja.size(); i++){
        caja[i]->utilizar();
    }

}
