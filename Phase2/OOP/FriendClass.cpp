#include <iostream>

using namespace std;

class Persona2;

class Persona1{
    friend class Persona2;
    private:
        int valorSecreto;
    public:
        void verSecreto(Persona2 &p);
        int getSecreto(){
            return valorSecreto;
        }
};

class Persona2{
    friend class Persona1;
    friend void verSecreto(Persona2 &);
    private:
        int valorSecreto;
    public:
        Persona2(int valor): valorSecreto(valor){}
        void verSecreto(Persona1 &p);
};

void verSecreto(Persona2 &p){
    //p.valorSecreto = 300;
    cout << p.valorSecreto << endl;
}

int main(){
    Persona2 p2 = 10;
    Persona1 p1;
    p1.verSecreto(p2);
    cout << endl;
    p2.verSecreto(p1);
    cout << endl;
    verSecreto(p2);
}

void Persona1::verSecreto(Persona2 &p){
    cout << p.valorSecreto;
}
void Persona2::verSecreto(Persona1 &p){
    cout << p.valorSecreto;
}