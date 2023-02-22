#ifndef JOSUE_ITERATOR_
#define JOSUE_ITERATOR_

#include <vector>
#include <string>

using namespace std;

class Iterator;

class Iterable{
    friend class Iterator;
    vector<string> nombres;
    public:
        Iterable(vector<string>);
        Iterator* createIterator();
        string getNombre(int);
        int getTotal();
};

class Iterator{
    Iterable* collection;
    int state;
    public:
        Iterator(Iterable*);
        string getNext();
        bool hasNext();

};

#endif