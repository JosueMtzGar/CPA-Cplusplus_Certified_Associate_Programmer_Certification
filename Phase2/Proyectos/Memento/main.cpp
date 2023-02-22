#include <iostream>
#include <vector>

#include "Memento.h"

using namespace std;

int main(){
    Caretaker * caretaker = new Caretaker();

    caretaker->doSomething();

    system("pause");
}