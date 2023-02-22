#include <iostream>
#include <vector>

using namespace std;

int main(){

int a=1, b=2,c=3; 
int *x, *y, *z;

x = &a;
y = &b;
z = &c; 

vector<int> vect{1,2,3};

int *ptr = vect.data();  //metodo data() de vector devuelve la direccion del primer elemento
int *ptr2 = &vect[0];

for (int i = 0; i < vect.size(); i++)
{
    cout << *(ptr+i) << endl; //un forma de imprimir los elementos de un vector con un puntero
}


cout << (ptr == ptr2) << endl;  //da un entero para que representa true o false (1 o 0)
cout << x << " " << x + a << endl; //suma de puntero y int
cout << x << " " << x - a << endl; //resta de puntero y int
cout << y << endl;
cout << x << " " << x - y << endl; //resta de dos punteros
cout << sizeof(int);




}