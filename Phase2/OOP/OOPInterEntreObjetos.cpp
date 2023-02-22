#include <iostream>

using namespace std;

class Libro{
    private:
        string autor;
        string titulo;
    public:
        Libro(string autor, string titulo) : autor(autor), titulo(titulo){
            cout << "Se creo libro" << endl;
        }
        Libro(const Libro &ref){
            autor = ref.autor;
            titulo = ref.titulo;
            cout << "Se copio un libro" << endl;
        }
        ~Libro(){
            cout << "Se destruyo un libro" << endl;
        }
        string getAutor(){
            return autor;
        }
        string getTitulo(){
            return titulo;
        }
        void print(){
            cout << autor << " escribio " << titulo << endl;
        }
};

class Persona{
    private:
        string nombre;
    public:
        Persona(string nombre) : nombre(nombre){}
        Libro generaLibro(string titulo){
            return Libro(this->nombre, titulo);
        }
        void leerLibro(Libro texto){
            cout << nombre << " lee el libro " << texto.getTitulo() << " del autor " << texto.getAutor() << endl;
        }
};

int main(){
    Persona escritor1("Juanito");
    Libro texto1 = escritor1.generaLibro("Las aventuras de juanito");
    texto1.print();

    Persona escritor2("Miguel");
    Libro texto2 = escritor2.generaLibro("Las aventuras de Miguel");
    texto2.print();

    escritor1.leerLibro(texto2);
    escritor2.leerLibro(texto1);

}