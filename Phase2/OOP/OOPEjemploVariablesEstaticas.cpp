#include <iostream>

using namespace std;

class Class{
    public:
        static int Static; //se compartes con todos los objetos
        int normal;
        void print(){
            saludar();  /* aqui si se pueden usar cosas estaticas */
            cout << "Static: " << Static << " Normal: " << normal << endl;
        }
        static void saludar(){
            cout << "Hola" << Static << endl;
            /* solo cosas estaticas se pueden usar aqui */
        }
};

int Class::Static = 10;

int main(){
    Class ob1; //, ob2;
    /* ob1.normal = 1;
    ob2.normal = 2;
    ob1.print();
    ob2.print(); */

    //ob1.saludar();
    Class::saludar();
}