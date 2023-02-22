#ifndef _JOSUE_COMPOSITE_
#define _JOSUE_COMPOSITE_

#include <string>
#include <vector>

using namespace std;

class Component{
    string nombre;
    int size;
    public:
        string getNombre();
        void setNombre(string);
        /*getSize = execute() */
        virtual int getSize();
        void setSize(int);
};


/* LEAF */
class Archivo: public Component{
    string ext;
    public:
        Archivo(int, string, string);
};

/* Composite */
class Carpeta: public Component{
    vector<Component*> hijos;
    public:
        Carpeta(string);
        void addHijo(Component*);
        Component* getHijo(int);
        void removeHijo(int);
        int getSize();
};


#endif