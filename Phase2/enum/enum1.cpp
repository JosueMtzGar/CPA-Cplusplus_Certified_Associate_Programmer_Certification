#include <iostream>

using namespace std;

class Objetos{
    public:
        int valor;
        enum ObjetosEnum{
            CELULAR,
            PC,
            TABLET,
            TV,
            RELOJ,
        };
        void imprimirPrecio(ObjetosEnum objeto){
            switch(objeto){
                case CELULAR:
                    cout << "El precio del celular es de: $4000" << endl;
                break;
                case PC:
                    cout << "El precio del PC es de: $5000" << endl;
                break;
                case TABLET:
                    cout << "El precio de la tablet es de $4500" << endl;
                break;
                case TV:
                    cout << "El precio de la tv es de: $8000" << endl;
                break;
                case RELOJ:
                    cout << "El precio del reloj es de: $1500" << endl;
                break;
                default:
                    cout << "Objeto invalido" << endl;
                break;
            }
        }
        float operator+(float der){
            cout << "Dentro de la clase" << endl;
            return this->valor + der;
        }
};

int operator+(Objetos &obj, int a){
    cout << "Fuera de la clase" << endl;
    return obj.valor + a;
}

int main(){
    Objetos obj;
    obj.valor = 10;

    int c = obj + 300;
    cout << "El valor (int) es: " <<  c << endl;
    float c2 = obj + 300.1f;
    cout << "El valor (float) es: " << c2 << endl;

    /* Objetos::ObjetosEnum fuera = static_cast<Objetos::ObjetosEnum>(1);
    cout << fuera << endl;

    obj.imprimirPrecio(fuera);
    obj.imprimirPrecio(Objetos::CELULAR);
    obj.imprimirPrecio(obj.PC);
    obj.imprimirPrecio(obj.TV);
    obj.imprimirPrecio(obj.TABLET);
    obj.imprimirPrecio(obj.RELOJ); */

    return 0;
}