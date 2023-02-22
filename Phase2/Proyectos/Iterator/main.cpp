#include <iostream>
#include <vector>
#include "Iterator.h"

using namespace std;

int main(){

    vector<string> data = {"Luz","Josue","Arquimides","Arturo"};
    Iterable* iterable = new Iterable(data);
    Iterator* it = iterable->createIterator();

    vector<string>::iterator itv = data.begin();
    for(/* Inicializacion */; itv != data.end(); itv++){
        cout << *itv << endl;
    }

    /* while(it->hasNext()){
        cout << it->getNext() << endl;
    } */

    for(int i = 0; it->hasNext(); ++i){
        cout <<"[" << (i+1) << "] " << it->getNext() << endl;
    }

    system("pause");

    delete iterable;
    delete it;
}