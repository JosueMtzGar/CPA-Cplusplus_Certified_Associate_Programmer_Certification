#include <iostream>

using namespace std;

int divicion(int a, int b){
    cout << "operacion" << endl;
    if(b){
        return a/b;
    } else {
        throw string("Error matematico");
    }
}

int main(){
    cout << "Inicio" << endl;
    int a = 10;
    int b = 0;
    try{
        int res = divicion(a,b);
        cout << res << endl;
    }
    catch(string &ex){
        cout << ex << endl;
    }
    
    cout << "Fin" << endl;
}