#include <iostream>

using namespace std;

void Impresion(float*** matptr, int size){
    /* Impresion de matriz */
    for(int t = 0; t<size; t++){
        cout << "Tienda " << t+1 << endl;
        for(int d= 0; d<size; d++ ){
            for(int p=0; p<size; p++){
                cout << matptr[t][d][p]<<" ";
            }
            cout << endl;
        }
        cout << endl<<endl;
    }
}

void Guardar_Precio(float*** matptr, int size){
    cout << "************ Bienvenido ************" << endl;
    
    for(int t = 0; t<size; t++){
        for(int d= 0; d<size; d++ ){
            for(int p=0; p<size; p++){
                cout << "Introdusca el precio del producto " << p+1 << " del departamento " << d+1 << " de la tienda " << t+1 << ": " << endl;
                cin >> matptr[t][d][p];
            }
        }
    }
}

void Suma_Depart(float*** matptr, int size){
    float suma = 0;
    for(int t = 0; t<size; t++){
        for(int d= 0; d<size; d++ ){
            for(int p=0; p<size; p++){
                suma += matptr[t][d][p];
            }
        cout << "La suma del departamento " << d+1 <<  " y tienda " << t+1 << " es: " << suma << endl;
        suma = 0;
        }
    }
}

void Suma_Tienda(float*** matptr, int size){
    float suma = 0;
    for(int t = 0; t<size; t++){
        for(int d= 0; d<size; d++ ){
            for(int p=0; p<size; p++){
                suma += matptr[t][d][p];
            }
        }
        cout << "La suma de la tienda " << t+1 << " es: " << suma << endl;
        suma = 0;
    }
}
int main(){
    const int size = 2; //size de cada fila, renglon.
    float*** matptr = new float**[size]; //generacion de matriz

    for(int t = 0; t < size; t++){
        matptr[t] = new float*[size]; //indice t de tienda
        for(int d = 0; d < size; d++){
            matptr[t][d] = new float[size]; //indice d de departamento
            for(int p = 0; p < size; p++){
                matptr[t][d][p] = 0; //indice p de producto
            }
        }

    }
    
    Guardar_Precio(matptr, size);
    cout << endl;
    Impresion(matptr, size);
    cout << "La sumas de precios por departamento son: " << endl;
    Suma_Depart(matptr, size);
    cout << endl;
    cout << "La sumas de precios por tienda son: " << endl;
    Suma_Tienda(matptr, size);

    /* Borrado de memoria dinamica */
    for(int d= 0; d<size; d++ ){
        for(int p=0; p<size; p++){
            delete [] matptr[d][p]; //borra las columnas
        }
        delete [] matptr[d]; //borra las filas
    }
    delete [] matptr; //borra la matriz
}