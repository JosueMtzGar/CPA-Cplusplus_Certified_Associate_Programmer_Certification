#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numeros(0);

    int numero = 1;
    int contador;

    do
    {
        cout << "Ingrese un numero (0 para salir): " ;
        cin >> numero;
        numeros.push_back(numero);


    } while (numero != 0);
    
    
    
    for (int i = 0; i < numeros.size() -1; i++){
        
        cout << numeros[i] << endl;
        
    }

    cout << "El numero de datos es:" << numeros.size()-1 << endl;

}