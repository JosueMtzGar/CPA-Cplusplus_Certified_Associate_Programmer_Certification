#include "BuilderEdificio.h"

void Edificio::agregarPiso(string propiedades){
    piso.push_back(propiedades);
};
void Edificio::agregarPropiedades(int piso, string propiedades){
    this->piso[piso].append(propiedades);
};

ostream& operator<<(ostream& left, const Edificio& right){
    for(int i=0; i<right.piso.size(); i++){
        left << "Piso #" << i << " " << right.piso[i] << endl;
    }
    return left<<"EDIFICIO";
}