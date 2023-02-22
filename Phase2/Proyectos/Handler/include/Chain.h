#ifndef _JOSUE_CHAIN_
#define _JOSUE_CHAIN_

#include <iostream>

using namespace std;

class Producto{
    string nombre;
    int cantidad;
    bool visible;

    public:
        Producto(string, int, bool);
        string getNombre();
        int getCantidad();
        bool isVisible();
};

class Usuario{
    string usuario, contrasena;
    /* Aqui pueden reemplazar por enum */
    int rol;
    public:
        Usuario(string, string, int);
        string getUsuario();
        string getContrasena();
        int getRol();
};

class Handler{
    Handler* next;
    public:
        void setHandler(Handler*);
        virtual bool validate(Usuario*, Producto*);
        Handler();
};

class Auth: public Handler{
    bool validate(Usuario*, Producto*);
};

class AuthRol : public Handler{

};

class ProDisp: public Handler{

};



#endif