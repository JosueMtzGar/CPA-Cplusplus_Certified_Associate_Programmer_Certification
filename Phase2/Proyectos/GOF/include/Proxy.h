#ifndef __MARCO_PROXY__
#define __MARCO_PROXY__
#include <string>
#include <vector>

using namespace std;

class InterfazServicio{
    public:
        // sin virtual se usa padre
        // con virtual se usa objeto real
        virtual string getLibro(int id);
        virtual int createLibro(string nombre);
        virtual bool borrarLibro(int id);
        virtual ~InterfazServicio();
};

class Servicio : public InterfazServicio{
    vector<string> libros;
    public:
        /* constructor con un ciclo de 1,000,000 */
        string getLibro(int id);
        int createLibro(string nombre);
        bool borrarLibro(int id);
        ~Servicio();
};

class Proxy : public InterfazServicio{
    Servicio *servicio;
    vector<string> log;
    public:
        Proxy();
        string getLibro(int id);
        int createLibro(string nombre);
        bool borrarLibro(int id);
        ~Proxy();
};


#endif