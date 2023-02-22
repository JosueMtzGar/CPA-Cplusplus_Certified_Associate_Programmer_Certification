#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pet{
    private:
        string nombre;
    public:
        Pet(string nombre){
            cout << "Pet construido" << endl;
            this->nombre = nombre;
        }
        virtual void make_sound(){
            cout << nombre << ": ruido" << endl;
        }
        string getNombre(){
            return this->nombre;
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
};

class Dog : public Pet{
    private:
        int *size;
        Dog(Dog &src): Pet(src.getNombre()){
            this->size = new int;
            *this->size = src.getSize();
        }
    public:
        Dog(string nombre, int size): Pet(nombre){
            cout << "Dog construido" << endl;
            this->size = new int;
            *this->size = size;
        }
        void make_sound(){
            cout << getNombre() << ": woff" << endl;
        }
        void morderFuerte(){
            cout << "Muerde muy fuerte" << endl;
        }
        int getSize(){
            return *this->size;
        }
        void setSize(int size){
            *this->size = size;
        }
        static Dog* makeDog(string name, int size){
            Dog * dog = new Dog(name, size);
            return dog;
        }
};

class Cat : public Pet{
    private:
        int vidas;
    public:
        Cat(string nombre): Pet(nombre){
            cout << "Cat construido" << endl;
            vidas = 7;
        }
        void make_sound(){
            cout << getNombre() << ": miau" << endl;
        }
        void saltarAlto(){
            cout << "Salto muy alto" << endl;
            vidas--;
            cout << "Le quedan " << vidas << endl;
        }
};

class DayCare{
    private:
        Dog *dog1, *dog2, *dog3;
    public:
        DayCare(){
            dog1 = nullptr;
            dog2 = nullptr;
            dog3 = nullptr;
        }
        bool agregarPerro(int pos, string nombre, int size){
            if(pos == 1 && dog1 == nullptr){
                dog1 = new Dog(nombre, size);
                return true;
            } else if(pos == 2 && dog2 == nullptr){
                dog2 = new Dog(nombre, size);
                return true;
            }else if(pos == 3 && dog3 == nullptr){
                dog3 = new Dog(nombre, size);
                return true;
            } else{
                return false;
            }
        }
        void retirar(int pos){
            if(pos == 1 && dog1 != nullptr){
                delete dog1;
                dog1 = nullptr;
            } else if(pos == 2 && dog2 != nullptr){
                delete dog2;
                dog2 = nullptr;
            } else if(pos == 3 && dog3 != nullptr){
                delete dog3;
                dog3 = nullptr;
            }
        }
        bool estaLibre(int pos){
            if(pos == 1 && dog1 == nullptr)
                return true;
            else if(pos == 2 && dog2 == nullptr)
                return true;
            else if(pos == 3 && dog3 == nullptr)
                return true;
            else
                return false;
            
        }
        void print(){
            if(dog1 != nullptr){
                cout << dog1->getNombre() << endl;
            } else{
                cout << "Libre" << endl;
            }
            if(dog2 != nullptr){
                cout << dog2->getNombre() << endl;
            } else{
                cout << "Libre" << endl;
            }
            if(dog3 != nullptr){
                cout << dog3->getNombre() << endl;
            } else{
                cout << "Libre" << endl;
            }
        }
        ~DayCare(){
            delete dog1;
            delete dog2;
            delete dog3;
        }
};
/* 
1) aceptar perros segun haya espacio
2) si esta lleno ya no permite mas perros
3) se pueden retirar los perros
4) implementar un metodo que diga los espacios libres
*/
int main(){
    DayCare daycare;
    cout << daycare.agregarPerro(1,"Juanito",10) << endl;
    cout << daycare.agregarPerro(2,"Firu",70) << endl;
    cout << daycare.agregarPerro(3,"Perrin",60) << endl;
    daycare.retirar(1);
    daycare.print();
}