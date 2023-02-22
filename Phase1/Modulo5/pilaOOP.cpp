#include <iostream>

using namespace std;

class Pila{
    public:
        int pila[100]; 
        int apuntador; //no se inicialicazn en cero de esta manera

        void push(int a){
            pila[apuntador++] = a; //implementar
        }

        int pop(){
            return pila[--apuntador];
        }
};

class PilaSuma : public Pila{
    public:
        int suma = 0;
        void push(int a){
            Pila::push(a);
            suma += a;
        }
        int pop(){
            int a = Pila::pop();
            suma -=a;
            return a;
        }
};

class PilaPromedio : public PilaSuma{
    public:
        float promedio(){
            return static_cast<float>(suma)/(float)apuntador;
        };
};



int main(){
    PilaPromedio grupoA;

    grupoA.apuntador = 0;

    grupoA.push(1);
    cout << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
    grupoA.push(2);
    cout << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
    grupoA.push(3);
    cout << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
    grupoA.push(4);
    cout << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;

    cout << "POP: " << grupoA.pop() << " SUMA: " << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
    cout << grupoA.apuntador << endl;
    cout << "POP: " << grupoA.pop() << " SUMA: " << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
    cout << grupoA.apuntador << endl;
    cout << "POP: " << grupoA.pop() << " SUMA: " << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
    cout << grupoA.apuntador << endl;
    cout << "POP: " << grupoA.pop() << " SUMA: " << grupoA.suma << " PROMEDIO: " << grupoA.promedio() << endl;
}