#include <iostream>
#include <vector>

using namespace std;

int main(){

    int a = 2;

    switch (a << a)
    {
    case 8: cout << a++ << a;
    case 4: cout << a++ << a << endl;
    case 2: break;
    case 1: a--;
    }

    cout << a;
}