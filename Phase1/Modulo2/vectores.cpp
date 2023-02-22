#include <iostream>
#include <vector>

using namespace std;

int main(){

    int size = 5;
    vector<int> numbers(size);
    int suma;

    for(int i = 0; i<size; i++){

        cout << "Valor del elemento del vector: ";
        cin >> numbers[i];

        suma += numbers[i];
    };

    cout << "El vector es:" << '\n';
    for(int i = 0; i<size; i++){

        
        cout << numbers[i] << " ";
    }

    cout << '\n' << "La suma de los elementos del vector es: " << suma << endl;
    
    // cambiar el orden de los elementos del vector
    int auxiliary;
    for(int i = 0; i<size/2; i++){

        auxiliary = numbers[i];
        numbers[i] = numbers[(size-1)-i];
        numbers[(size-1)-i] = auxiliary;
        //cout << numbers[i] << " ";
    }

    cout << "El vector es con el nuevo orden es:" << '\n';
    for(int i = 0; i<size; i++){

        
        cout << numbers[i] << " ";
    }

    cout << endl;


}