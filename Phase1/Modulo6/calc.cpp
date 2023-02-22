#include <iostream>

using namespace std;

/*
    Crear Clase Calc con 4 clases amigas (Suma, Resta, Multiplicacion, Division)
    y 4 funciones amigas (Suma, Resta, Multiplicacion, Division)
    el objetivo es realizar la calculadora utilizando clases y funciones amigas.
*/

class Calc{
    private:
        double num1, num2, n;
    public:
        void leernum1(){
            cout << "Introducir numero 1 " << endl;
            cin >> num1;
        }
        void leernum2(){
            cout << "Introducir numero 2 " << endl;
            cin >> num2;
        }
        void suma();
        void resta();
        void multiplicacion();
        void divicion();

        int menu(){
            cout << "***********************************" << endl;
            cout << "Eliga la opcion que desea realizar: " << endl;
            cout << endl;
            cout << "1 Suma de dos numeros" << endl;
            cout << "2 Resta de dos numeros" << endl;
            cout << "3 Multiplicacion de dos numeros" << endl;
            cout << "4 Divicion de dos numeros" << endl;
            cout << "0 Salir de la calculadora" << endl;
            cout << "***********************************" << endl;
            cout << "Tu opcion es: ";
            cin >> n;

            return n;
        }
};

class Suma{
    friend class Calc;
    private:
        int num1, num2;
    public:
        Suma():num1(0),num2(0){}
        void print(){
            cout << "* Resultado = " << num1 + num2 << " *" << endl;
        }
};

class Resta{
    friend  class Calc;
    private:
        int num1, num2;
    public:
        Resta():num1(0), num2(0){}
        void print(){
            cout << "* Resultado = " << num1 - num2 << " *" << endl;
        }
};

class Multiplicacion{
    friend  class Calc;
    private:
        int num1, num2;
    public:
        Multiplicacion():num1(0), num2(0){}
        void print(){
            cout << "* Resultado = " << num1 * num2 << " *" << endl;
        }
};

class Divicion{
    friend  class Calc;
    private:
        double num1, num2;
    public:
        Divicion():num1(0), num2(0){}
        void print(){
            cout << "* Resultado = " << num1/num2 << " *" << endl;
        }
};

void Calc::suma(){
    leernum1();
    leernum2();
    Suma s;
    s.num1 = num1;
    s.num2 = num2;
    s.print();
};

void Calc::resta(){
    leernum1();
    leernum2();
    Resta r;
    r.num1 = num1;
    r.num2 = num2;
    r.print();
};

void Calc::multiplicacion(){
    leernum1();
    leernum2();
    Multiplicacion m;
    m.num1 = num1;
    m.num2 = num2;
    m.print();
};

void Calc::divicion(){
    double denominador;
    leernum1();
    leernum2();
    denominador = num2;
    if(!denominador){
        do{
            cout << "Debe ser un numero diferente de cero, ";
            leernum2();
            denominador = num2;
        } while (!denominador);
    }
    Divicion d;
    d.num1 = num1;
    d.num2 = num2;
    d.print();
};

int main(){
    Calc a;
    int opcion;
    cout << "***********************************" << endl;
    cout << "Bienvenido a la calculadora" << endl;
    do{
        opcion = a.menu();

        switch (opcion){
        case 1:
            cout << "Ha elegido suma" << endl;
            a.suma();
            break;
        case 2:
            cout << "Ha elegido resta" << endl;
            a.resta();
            break;
        case 3:
        cout << "Ha elegido suma multiplicacion" << endl;
            a.multiplicacion();
            break;
        case 4:
            cout << "Ha elegido divicion" << endl;
            a.divicion();
            break;
        case 0:
            cout << "Hasta pronto" << endl;
            break;
        }
    }while(opcion);
}