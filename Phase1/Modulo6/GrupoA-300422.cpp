#include <iostream>

using namespace std;

/*
    Crear Clase Calc con 4 clases amigas (Suma, Resta, Multiplicacion, Division) 
    y 4 funciones amigas (Suma, Resta, Multiplicacion, Division)
    el objetivo es realizar la calculadora utilizando clases y funciones amigas.
*/

class Calc{
    private:
        int num1, num2;
    public:
        void leerNum1(){
            cout << "Introducir numero 1" << endl;
            cin >> num1;
        }
        void leerNum2(){
            cout << "Introducir numero 2" << endl;
            cin >> num2;
        }
        void suma();
        void resta();
};

class Suma{
    //friend class Calc;
    friend void suma();
    friend void Calc::suma();
    friend void Calc::resta();
    private:
        int num1, num2;
    public:
        Suma():num1(0), num2(0){}
        void print(){
            cout << "Resultado = "<< num1+num2 << endl;
        }
};

void suma(){
    int a, b;
    cout<<"Introducir #1"<<endl;
    cin >> a;
    cout<<"Introducir #2"<<endl;
    cin >> b;
    Suma s;
    s.num1 = a;
    s.num2 = b;
    s.print();
}

void Calc::suma(){
    leerNum1();
    leerNum2();
    Suma s;
    s.num1 = num1;
    s.num2 = num2;
    s.print();
}

int main(){
    //suma();
    Calc c;
    c.suma();
}