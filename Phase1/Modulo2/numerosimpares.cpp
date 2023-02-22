#include <iostream>

using namespace std;

int main(){

    int infinito = 0;
    do{
        infinito++;
        if (infinito % 2 != 1)
        {
            continue;
        }

        cout << infinito << endl;

    }while(infinito < 20);

}