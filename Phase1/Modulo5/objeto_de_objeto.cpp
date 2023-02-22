#include <iostream>

using namespace std;

class Obj{
    private:
        int valor;
    public:
        void set(int valor){
            this->valor = valor;
        }
        int get(){
            return valor;
        }

};

class Col{
    private:
        Obj ob1, ob2;
    public:
        void set(int obj, int valor){
            if (obj == 1){
                ob1.set(valor);
            }else{
                ob2.set(valor);
            }
        }
        int get(int obj){
            return (obj == 1)?(ob1.get()):(ob2.get());
        }
        void print(){
            cout << "OB1: " << ob1.get() << " OB2: " << ob2.get() <<endl;
        }   
        
};

int main(){
    Col col;
    col.set(1, 100);
    col.set(2,200);
    col.print();
}