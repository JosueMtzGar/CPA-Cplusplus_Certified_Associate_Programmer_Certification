#include <iostream>

using namespace std;

int main(){
    int total = 10;
    /* definiendo matriz, un puntero de punteros */
    int ** mat = new int*[total];
    /* crear sub arrays */
    for(int i=0; i < total; i++){
        mat[i]= new int[total];
    }
    /* se trabaja como matriz*/
    for(int i=0; i<total; i++){
        for(int j=0; j<total; j++){
            mat[i][j] = (i+1)*(j+1);
        }
    }

    for(int i=0; i<total; i++){
        for(int j=0; j<total; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    for(int i=0; i<total; i++){
        delete [] mat[i];
    }

    delete [] mat;

}