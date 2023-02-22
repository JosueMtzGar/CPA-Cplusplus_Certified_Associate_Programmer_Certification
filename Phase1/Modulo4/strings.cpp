#include <iostream>
#include <string>

using namespace std;

int main(){
    string lectura;

   /*  cout << "Introdusca texto: " << endl; //solo guarda hasta el primer espacio
    cin >> lectura;
    cout << lectura << endl; */

    cout << "Introdusca texto: " << endl;
    getline(cin, lectura); //guarda toda la lines de texto
    cout << lectura;


}