#include <iostream>
#include "Iterator.h"

using namespace std;


Iterable::Iterable(vector<string> nombres): nombres(nombres){}

Iterator* Iterable::createIterator(){
    return new Iterator(this);
}

string Iterable::getNombre(int pos){
    if(pos < nombres.size())
        return nombres[pos];
    else
        throw 1;
}

int Iterable::getTotal(){
    return nombres.size();
}

Iterator::Iterator(Iterable* collection): collection(collection){
    state = 0;
}

string Iterator::getNext(){
    if(state < collection->getTotal())
        return collection->nombres[++state];
    else
        throw 1;
}
/* string Iterator::getNext(){
    if(state < collection->getTotal()){
        return collection->getNombre(state++);
    }else{
        throw 1;
    }
} */

bool Iterator::hasNext(){
    return state+1 < collection->nombres.size();
}