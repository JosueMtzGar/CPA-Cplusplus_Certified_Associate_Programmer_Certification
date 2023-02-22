#ifndef _JOSUE_BUILDER_EDIFICIO_
#define _JOSUE_BUILDER_EDIFICIO_

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Edificio{
    friend ostream& operator<<(ostream&, const Edificio&);
    vector<string> piso;
    public:
        void agregarPiso(string propiedades);
        void agregarPropiedades(int piso, string propiedades);
};

#endif