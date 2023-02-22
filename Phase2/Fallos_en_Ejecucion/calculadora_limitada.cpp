#include <iostream>

using namespace std;

class Calculadora{
    public:
        bool funcionando;
        Calculadora(){
            funcionando = true;
        }
        void ejecutar(){
            int a,b,opc;
            mostrarOpciones();
            cout << "Su opcion: ";
            cin >> opc;
            switch(opc){
                case 0:
                    this->funcionando = false;
                    break;
                case 1:
                    cout << "Numero 1: ";
                    cin >> a;
                    cout << "Numero 2: ";
                    cin >> b;
                    cout << "> Resultado: " << suma(a,b) << endl;
                    break;
                case 2:
                    cout << "Numero 1: ";
                    cin >> a;
                    cout << "Numero 2: ";
                    cin >> b;
                    cout << "> Resultado: " << resta(a,b) << endl;
                    break;
                case 3:
                    cout << "Numero 1: ";
                    cin >> a;
                    cout << "Numero 2: ";
                    cin >> b;
                    cout << "> Resultado: " << multiplicacion(a,b) << endl;
                    break;
                case 4:
                    cout << "Numerador: ";
                    cin >> a;
                    cout << "Denominador: ";
                    cin >> b;
                    cout << "> Resultado: " << divicion(a,b) << endl;
                    break;
            }
            
        }
        void mostrarOpciones(){
            cout << "1 Suma de dos numeros" << endl;
            cout << "2 Resta de dos numeros" << endl;
            cout << "3 Multiplicacion de dos numeros" << endl;
            cout << "4 Divicion de dos numeros" << endl;
            cout << "0 Salir" << endl;
        }
        float suma(int a, int b){
            float sum = a+b;
            if(sum<0)
                throw invalid_argument("Error! Suma negativa");
            else
                return sum;
        }

        float resta(int a, int b){
            float resta = a-b;
            if(resta<0){
                throw out_of_range("Error! Resta negativa");
            }else{
                return resta;
            }
        }

        float multiplicacion(int a, int b){
            float test1, test2;
            test1 = a/100'000;
            test2 = b/100'000;
            if(test1 >= 1)
                throw out_of_range("Error! Primer numero con mas de 5 digitos");
            if(test2 >= 1)
                throw out_of_range("Error! Segundo numero con mas de 5 cifras");
            else
                return a*b;
        }

        float divicion(int a, int b){
            if(b == 0)
                throw invalid_argument("Error! Divicion entre cero");
            if(a<0)
                throw invalid_argument("Error! Primer numero negativo");
            if(b<0)
                throw invalid_argument("Error! Segundo numero negativo");
            else
                return a/b;
        }
};

int main(){
    Calculadora c;

    cout << "***** Bienvenido *****" << endl;
    while(c.funcionando){
        try{
            c.ejecutar();
        }catch(logic_error e){
            cout << e.what() << endl;
        }
    }
}