#include <iostream>
#include <string>

using namespace std;

int main(){

    int total = 5, **matr = new int *[total];

    for (int i = 0; i < total; i++)
    {
        matr[i] = new int[1+i]; 
    }
    

    for (int i = 0; i < total; i++){
        for (int j = 0; j < 1+i; j++){
            matr[i][j] = i + j;
            cout << matr[i][j] << " ";
        } 
        cout << endl;   
    }

    for (int i = 0; i < total; i++)
    {
        delete [] matr[1+i]; 
    }

    delete [] matr[total];
    


}