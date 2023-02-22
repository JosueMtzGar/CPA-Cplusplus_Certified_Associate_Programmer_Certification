#include <iostream>
#include <sstream>

using namespace std;

class Fraccion{
    //friend Fraccion operator+(Fraccion, Fraccion);
    int numerador, denominador;
    public:
        // a / b
        Fraccion(int numerador, int denominador){
            this->numerador = numerador;
            this->denominador = denominador;
        }
        Fraccion(int numerador){
            this->numerador = numerador;
            this->denominador = 1;
        }
        Fraccion operator+(Fraccion der){
            int num, den;
            num = this->numerador * der.denominador  + der.numerador*this->denominador;
            den = this->denominador * der.denominador;
            return Fraccion(num, den);
        }
        Fraccion operator-(Fraccion der){
            int num, den;
            num = this->numerador * der.denominador  - der.numerador*this->denominador;
            den = this->denominador * der.denominador;
            return Fraccion(num, den);
        }
        int getDenominador(){
            return this->denominador;
        }
        void print(){
            cout << this->numerador <<"/"<< this->denominador << endl;
        }
        string toString(){
            ostringstream os;
            os <<"["<< this->numerador << '/' << this->denominador << " = "<< static_cast<float>(this->numerador)/this->denominador << "]";
            return os.str();
        }
};

ostream& operator<<(ostream &izq, Fraccion der){
    return izq << der.toString();
}

int main(){
    Fraccion a(1,2), b(1,3);
    Fraccion c = a - b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
}