#include <iostream>

using namespace std;

int main(){

    int numero, max;

    cout << "Se calcula el numero mayor de los numeros que ingrese" << '\n';

    do
    {
        cout << "Ingrese un numero" << '\n';
        cin >> numero;

        if (max < numero)
        {
            max = numero;
            
        }
        
    } while (numero != -1);

    cout << "El numero mayor es " << max;
    
    /*

    if ( a < b && c < b){

        cout << b << " es el mayor de los tres numeros" ;
        
    } else {

        if( a<c && b<c ){

            cout << c << " es el mayor de los tres numeros";
        } else {

            cout << a << " es el mayor de los tres numeros" ;
        }

        
    }

    */

}