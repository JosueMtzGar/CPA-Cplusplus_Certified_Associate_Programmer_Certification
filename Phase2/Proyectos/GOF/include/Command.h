#ifndef __MARCO_COMMAND__
#define __MARCO_COMMAND__

#include <vector>
#include <string>
using namespace std;

/* Interfaz */
class Command{
    public:
        virtual void run();
};

/* invoker */
class Boton{
    string nombre;
    Command * action;
    public:
        Boton(string nombre);
        void setCommand(Command*);
        void click();
        string getNombre();
};

class Menu{
    vector<Boton *> botones;
    public:
        Menu(vector<Boton *>);
        void printMenu();
        void seleccionar();
};

class Copy: public Command{
    public:
        void run();
};
class Paste: public Command{
    public:
        void run();
};
class Cut: public Command{
    public:
        void run();
};
class Save: public Command{
    public:
        void run();
};
class Open: public Command{
    public:
        void run();
};

#endif