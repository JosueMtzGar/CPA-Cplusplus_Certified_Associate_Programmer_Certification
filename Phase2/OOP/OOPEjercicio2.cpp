#include <iostream>

using namespace std;

namespace Parte1{
    class Persona{
        private:
            string nombre;
        public:
            //constructor
            Persona(string nombre){
                this->nombre = nombre;
            }
    };
}

namespace Parte2{
    class Destructores{
        public:
            Destructores(){
                cout << "Se ha creado el objeto" << endl;
            }
            ~Destructores(){
                cout << "Se ha destruido el objeto" << endl;
            }
    };
}

using namespace Parte2;

int main(){

}