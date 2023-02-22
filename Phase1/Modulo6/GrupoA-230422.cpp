#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pet{
    private:
        string nombre;
    public:
        Pet(string nombre){
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
    public:
        Dog(string nombre): Pet(nombre){}
        void make_sound(){
            cout << getNombre() << ": woff" << endl;
        }
        void morderFuerte(){
            cout << "Muerde muy fuerte" << endl;
        }
};

class Cat : public Pet{
    private:
        int vidas;
    public:
        Cat(string nombre): Pet(nombre){
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

void jugarPtr(Pet *pet){
    Cat* c = dynamic_cast<Cat*>(pet);
    if(c != nullptr){
        c->saltarAlto();
    }
    Dog *d = dynamic_cast<Dog*>(pet);
    if(d != nullptr){
        d->morderFuerte();
    }
    pet->setNombre("Nombre modificado");
    pet->make_sound();
}

int main(){
    vector<Pet*> animales = {new Pet("PET"),new Cat("Michis"), new Dog("Firu"), new Dog("Firu"), new Dog("Firu"), new Dog("Firu"), new Dog("Firu")};
    animales.push_back(new Cat("Otro gato"));
    for(int i = 0; i< animales.size(); i++)
        jugarPtr(animales[i]);
}