#include <iostream>

using namespace std;

class Persona{
    private:
        string nombre;
        int *edad;
    public:
        int getEdad(){
            return *this->edad;
        }
        void aumentarEdad(int cantidad){
            *this->edad += cantidad;
        }
        void printDir(){
            cout << nombre << " " << edad << endl;
        }
        Persona(){
            this->nombre = "sin nombre";
            edad = new int;
            *this->edad = 0;
        };
        /* constructor copia */
        Persona(const Persona &original){
            this->nombre = original.nombre;
            this->edad = new int; //se separan los valores de las copias
            *this->edad = *original.edad;
            //this->edad = original.edad; se copian las direcciones tambien
            cout << "constructor copia" << endl;
        };
        ~Persona(){
            delete edad;
        };
};

int main(){
    Persona A, B = A;
    A.aumentarEdad(10);
    cout << "A: " << A.getEdad() << "B: " << B.getEdad() << endl;
    B.aumentarEdad(-10);
    cout << "A: " << A.getEdad() << "B: " << B.getEdad() << endl;


    A.printDir();
    B.printDir();
}