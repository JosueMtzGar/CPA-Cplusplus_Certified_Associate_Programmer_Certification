#include <iostream>

using namespace std;

class Pastel{
    private:
        int tipo;
        int numero;
    public:
        Pastel(int numero, int tipo) : numero(numero), tipo(tipo){}
        void imprimeNumero(){
            cout << numero << endl;
        }
        void imprimePastel(){
            cout << tipo << endl;
        }
};

class Pastelero{
    private:
        string nombre;
        int totalPasteles;
        int getTotalPasteles(){
            return totalPasteles;
        }
    public:
        Pastel hacerPastel(int tipo){
            totalPasteles++;
            return Pastel(this->totalPasteles, tipo);
        }
        Pastelero(string nombre) : nombre(nombre){
            this->totalPasteles = 0;
        }
        void imprimirTotal(){
            cout << getTotalPasteles() << endl;
        }
};

int main(){
    Pastelero num1("Josue");
    Pastel vainilla = num1.hacerPastel(1);
    Pastel chocolate = num1.hacerPastel(2);
    Pastel coco = num1.hacerPastel(3);

    vainilla.imprimeNumero();
    chocolate.imprimeNumero();
    coco.imprimeNumero();

    coco.imprimePastel();
    chocolate.imprimePastel();
    vainilla.imprimePastel();

    num1.imprimirTotal();
}