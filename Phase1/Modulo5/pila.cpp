#include <iostream>

using namespace std;

int pila[100];
int apuntador = 0;

void push(int a){
    pila[apuntador++] = a; //implementar
}

int pop(){
    int a = 0;
    a = pila[--apuntador]; //implemetar
    return a;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    cout << pop(); //4
    cout << pop(); //3
    cout << pop(); //2
    cout << pop(); //1
}