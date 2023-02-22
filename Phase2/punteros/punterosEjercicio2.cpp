#include <iostream>
#include <vector>

using namespace std;

int main(){
    //array para los numeros de * a imprimir
    vector<int> arr = {1,3,2,4,3,5};
    //creacion de matriz de chars
    char** mat = new char*[6];
    //creacion de arrays de chars
    for(int i = 0; i < 6; i++){
        mat[i] = new char[6];
    }
    //inicializacion de matriz en ceros
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            mat[i][j] = 0;        
        }
    }
    int par, impar;
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < arr[i]; j++ ){
            mat[i][j] = 42;
            cout << mat[i][j];        
        }
        cout << endl;
    }

    //liberacion de memoria dinamica
    for(int i = 0; i < 6; i++){
        delete [] mat[i];
    }

    delete [] mat;
}