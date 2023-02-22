#ifndef __MARCO_MEMENTO__
#define __MARCO_MEMENTO__

#include <string>
#include <vector>

using namespace std;

class Memento{
    string state;
    public:
        Memento(string);
        string getState();
};

/* originator */
class Documento{
    string state;
    public:
        Documento();
        Memento* save();
        void restore(Memento*);
        void addText(string);
        void removeText(int,int); // les toca a ustedes
        void insertText(int, string); // les toca a ustedes
        void printText(); // hacerlo
};

class Caretaker{
    vector<Memento*> history;
    Documento *documento;
    public:
        Caretaker();
        void undo();
        void doSomething();
};

#endif