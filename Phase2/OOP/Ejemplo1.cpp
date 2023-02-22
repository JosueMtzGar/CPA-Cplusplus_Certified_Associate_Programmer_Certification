#include <iostream>

using namespace std;

namespace Perros{
    class Perro{
        public:
            string nombre;
            int edad;
            int color;
            string raza;
            
            void morder();
            void ladrar();
            void comer(string comida);
    };

    void Perro::ladrar(){
        cout << nombre << "ladra fuerte" << endl;
    }

    void Perro::comer(string comida){
        cout << nombre << "come " << comida << endl;
    }

    void Perro::morder(){
        cout << nombre << "Muerde con fuerza" << endl;
    }
}

namespace Personas{
    class Persona{
        public:
            string nombre;
            void prueba(){
                contrasena = "hola";
                cout << contrasena;
            }
        protected:
            int telefono;
        private:
            string contrasena;
    };
}

using namespace Perros;

int main(){
    Perro panchito, nieve;
    panchito.color = 0xFFFFF;
    panchito.edad = 2;
    panchito.raza = "Chihuahua";
    panchito.nombre = "Panchito";

    panchito.comer("Croquetas");
    panchito.ladrar();

    nieve.color = 0xFFFFF;
    nieve.edad = 1;
    nieve.raza = "French poodle";
    nieve.nombre = "Nieve";

    nieve.comer("Chuletas");
    nieve.ladrar();
    nieve.morder();
}
