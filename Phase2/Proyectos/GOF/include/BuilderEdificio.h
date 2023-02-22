#ifndef __MARCO_BUILDER_EDIFICIO__
#define __MARCO_BUILDER_EDIFICIO__

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