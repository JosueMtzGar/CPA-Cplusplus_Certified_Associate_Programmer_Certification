#include <iostream>

using namespace std;

int main (){

    // **** Anomalias numericas de float y double debido a sus presiciones ******

    long long int i = 2147483647; // valor maximo de un int (32 bits)

    float a = 11111111000.0;        
    float b = 0.00011111111;
    float c = a + b;       

    // si se cambian a double las 3 anteriores variables se obtiene un resultado mas cervana al esperado
    
    cout << fixed << c << endl;    // fixed hace que no se imprima en formato cientifico

    double d = 0.1;
    double e = 0.2;
    double f = 0.3;

    // si se cambian a float las 3 anteriores variables se optendra que son iguales d y e

    if ( d + e == f){

        cout << "Son iguales";
    } else {

        cout << "Algo anda mal";

    }


    return 0;
}