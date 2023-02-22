#include <iostream>

using namespace std;

int main(){
    int size = 10;
    int** arr = new int* [size];

    for(int i = 0; i < size; i++){
        arr[i] = new int[size];
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            arr[i][j] = 0;
        }
    }

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < size; i++){
        delete [] arr[i];
    }

    delete [] arr;
}