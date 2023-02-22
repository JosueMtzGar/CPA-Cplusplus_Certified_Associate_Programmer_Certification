#ifndef __MARCO_CHAIN__
#define __MARCO_CHAIN__

#include <string>

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
    /* Aqui puden reemplazar por enum */
    int rol; 
    public:
        Usuario(string, string, int);
        string getUsuario();
        string getContrasena();
        int getRol();
};

class Handler{
    Handler * next;
    public:
        void setHandler(Handler*);
        virtual bool validate(Usuario *, Producto *);
        Handler();
};

class Auth: public Handler{
    bool validate(Usuario *, Producto *);
};
class AuthRol: public Handler{
    bool validate(Usuario *, Producto *);
};
class ProdDisp: public Handler{
    bool validate(Usuario *, Producto *);
};
class ProdVis: public Handler{
    bool validate(Usuario *, Producto *);
};


#endif