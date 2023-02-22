#include <iostream>

using namespace std;

int main(){
    /* declaracion de la matriz tridimencional */
    float *** matptr = new float**[3]; // generamos matrices
    /* inicializacion de renglones */
    for(int i = 0; i<3; i++){
        matptr[i] = new float*[3]; // generamos renglones
        for(int j= 0; j<3; j++ ){
            matptr[i][j] = new float[3]; // generamos columnas
            for(int k=0; k<3; k++){
                matptr[i][j][k] = 0; // inicializamos con 0
            }
        }
    }

    for(int i = 0; i<3; i++){
        for(int j= 0; j<3; j++ ){
            for(int k=0; k<3; k++){
                cout << matptr[i][j][k]<<" ";
            }
            cout << endl;
        }
        cout << endl<<endl;
    }
    /* borrando datos */
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++)
            delete [] matptr[i][j]; // borra las columnas
        delete [] matptr[i]; // se borra los renglones
    }
    delete [] matptr; // borramos matriz
}

