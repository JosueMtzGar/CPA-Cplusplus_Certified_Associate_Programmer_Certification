#include <iostream>

using namespace std;

class Taquilla{
    private:
        int boletos;
    public:
        Taquilla(int boletos){
            if(boletos > 0)
                this->boletos = boletos;
            else
                throw string("Valores incorrectos");
        }
        ~Taquilla(){

        }
};

int main(){
    try{
        Taquilla taq(-10);
    }
    catch(string error){
        cout << error << endl;
    }
}