#include <iostream>

using namespace std;

class Taquilla{
    private:
        int boletos, total_boletos;
    public:
        Taquilla(int total_boletos){
                this->total_boletos = total_boletos;
        }
        ~Taquilla(){}
        void comprar(int boletos){
            if(boletos < 3){
                if(boletos < 0){
                    throw string("Valores incorrectos");
                }else{
                this->total_boletos -= boletos;
                }
            }else{
                throw string("*Se permiten solo 2 boletos maximo*");
            }
        }

        int restantes(){
            if(total_boletos > 0)
                return total_boletos;
            else
                throw string("Se acabaron los boletos");
        }

        void PrintRestantes(){
                cout << ">Quedan " << this->total_boletos << " boletos" << endl;
        }

};

int main(){
    int total_boletos = 10, boletos_comprar;
    cout << "*************************" << endl;
    cout << "Bienvenido a la taquilla" << endl;
    cout << "*************************" << endl;
    try{
        Taquilla taq(total_boletos);
        while(taq.restantes() > 0){
            cout << "Boletos a comprar: ";
            cin >> boletos_comprar;
            try{
                taq.comprar(boletos_comprar);
            }
            catch(string &e){
                cout << e << endl;
            }
            try{
            taq.PrintRestantes();
            }
            catch(string &er){
                cout << er << endl;
            }
        }
    }
    catch(string error){
        cout << error << endl;
    }
}