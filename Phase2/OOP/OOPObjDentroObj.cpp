#include <iostream>

using namespace std;

class Identificacion{
    private:
        string nombre;
        string curp;
        int edad;
        string genero;
    public:
        /* Identificacion(string nombre) : nombre(nombre){} */
        Identificacion(string curp, string nombre, string genero, int edad) : 
        curp(curp), nombre(nombre), genero(genero), edad(edad){}
        string getNombre(){
            return nombre;
        }
        string getCurp(){
            return curp;
        }
        int getEdad(){
            return edad;
        }
        string getGenero(){
            return genero;
        }
        void setGenero(string genero){
            this->genero = genero;
        }
        void setEdad(int edad){
            this->edad = edad;
        }
        void setCurp(string curp){
            this->curp = curp;
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
        void print(){
            cout << "ID: " << endl;
            cout << "Nombre: " << nombre << endl;
            cout << "Curp: " << curp <<  endl;
            cout << "Edad: " << edad << endl;
            cout << "Genero: " << genero << endl;
        }
};

class Persona{
    private:
        string nombre;
        int edad;
        Identificacion i;
    public:
        Persona(string nombre, int edad, string curp, string genero) : nombre(nombre), edad(edad), i(curp, nombre, genero, edad){
            i.setEdad(edad);
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
        string getNombre(){
            return this->nombre;
        }
        void setEdad(int edad){
            this->edad = edad;
        }
        int getEdad(){
            return this->edad;
        }
        void setIdentificacion(Identificacion i){
            this->i = i;
        }
        Identificacion getIdentificacion(){
            return i;
        }
        void print(){
            cout << "Mi nombre es " << nombre << " y tengo " << edad << endl;
            cout << "Mi identificacion es: " << endl;
            i.print();
        }
};


int main(){
    Identificacion i("asdlfjdkds", "Josue", "Masculino", 24);
    /* i.setCurp("asdlfjdkds");
    i.setNombre("Josue");
    i.setEdad(24);
    i.setGenero("Masculino"); */
    i.print();

    Persona josue(i.getNombre(), i.getEdad(), i.getCurp(), i.getGenero());
    //josue.setIdentificacion(i);
    josue.print();
}