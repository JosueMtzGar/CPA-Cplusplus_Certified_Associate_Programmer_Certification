#include <iostream>

using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        string getNombre(){
            return nombre;
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
        int getEdad(){
            return edad;
        }
        void setEdad(int edad){
            this->edad = edad;
        }
        void printDir(){
            cout << &edad << endl;
        }
        //constructores
        Persona(const Persona &original){
            this->nombre = original.nombre;
            this->edad = original.edad;
            cout << "Constructor copia" << endl;
        }/* Constructor de copia */
        Persona(): nombre("Sin nombre"){
            //cout << "Se ha creado la persona" << endl;
        } /* constructor por default */
        Persona(string nombre): nombre(nombre){
            cout << "Se ha creado la persona" << endl;
        }
        //destructor
        ~Persona(){
            //cout << "Se ha destruido la persona" << endl;
        }
};

int main(){
    /* Persona p;
    Persona josue("Josue");
    cout << p.getNombre() << endl;
    cout << josue.getNombre() << endl; */

    Persona A("Juanito"), B = A;
    cout << A.getNombre() << " " << B.getNombre() << endl;
    cout << B.getEdad() << " " << A.getEdad() << endl;

    A.printDir();
    B.printDir();
}