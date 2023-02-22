#include <iostream>

using namespace std;

namespace Forma1{
    int pila1[100];
    int pila2[100];
    
    namespace Pila1{
        int apuntador = 0;

        void push(int a){
            pila1[apuntador++] = a; //implementar
        }

        int pop(){
            int a = 0;
            a = pila1[--apuntador]; //implemetar
            return a;
        }
    }

    namespace Pila2{
        int apuntador = 0;

        void push(int a){
            pila2[apuntador++] = a; //implementar
        }

        int pop(){
            int a = 0;
            a = pila2[--apuntador]; //implemetar
            return a;
        }
    }

    int Do(){
        Pila1::push(1);
        Pila1::push(2);
        Pila2::push(3);
        Pila2::push(4);

        cout << ">Pila 1" << endl;
        cout << Pila1::pop() << endl; //4
        cout << Pila1::pop() << endl; //3
        
        cout << ">Pila 2" << endl;
        cout << Pila2::pop() << endl; //2
        cout << Pila2::pop() << endl; //1
        return 0;
    }
}

namespace Forma2{
    struct Pilas{
        int *pilas;
    };

    
    
}

int main(){
    cout << "******** Forma 1 ********" << endl;
    Forma1::Do();

    cout << "******** Forma 2 ********" << endl;

}