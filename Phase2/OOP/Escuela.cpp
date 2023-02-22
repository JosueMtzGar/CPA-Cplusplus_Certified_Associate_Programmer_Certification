#include <iostream>
#include <vector>

using namespace std;

class Persona{
    private:
        string nombre;
        string direccion;
        string fecha_nac;
    public:
        void registrarDatos(string nombre, string direccion, string fecha_nac){
            this->nombre = nombre;
            this->direccion = direccion;
            this->fecha_nac = fecha_nac;
        }
        string getNombre(){
            return nombre;
        }
        string getDireccion(){
            return direccion;
        }
        string getFecha_nac(){
            return fecha_nac;
        }
        void mostrarDatos(){
            cout << "Los datos de " << nombre << " son: " << endl;
            cout << "Direccion: " << direccion << endl;
            cout << "Fecha de nacimiento: " << fecha_nac << endl;
        }
};

class Estudiante;

class Profesor: public Persona{
    private:
        string materia;
        vector<Estudiante*> asesorado;
    public:
        void setMateria(string materia){
            this->materia = materia;
        }
        void setAsesorado(Estudiante* est){
            this->asesorado.push_back(est);
        }
        string getMateria(){
            return materia;
        }
        Estudiante* getAsesorado(int id){
            return asesorado[id];
        }
        void mostrarProfesor(){
            mostrarDatos();
            cout << "Materia: " << materia << endl;
            cout << "Asesorados: " << endl;
            for(int i = 0; i < asesorado.size(); i++){
                cout << asesorado[i].getNombre() << endl;
            }

        }

};

class Estudiante: public Persona{
    private:
        int grado;
        char grupo;
        Profesor* tutor;
    public:

        void setGrado(int grado){
            this->grado = grado;
        }
        void setGrupo(char grupo){
            this->grupo = grupo;
        }
        void setTutor(Profesor* tutor){
            this->tutor = tutor;
        }
        void mostrarEstudiante(){
            mostrarDatos();
            cout << "Grado: " << grado << endl;
            cout << "Grupo: " << grupo << endl;
            cout << "Tutor: " << tutor->getNombre() << endl;
        }
};

class Escuela{
    private:
        vector<Estudiante*> estudiantes;
        vector<Profesor*> profesores;
    public:
        void consultarEstudiantes(){
            for(int i = 0; i < estudiantes.size(); i++ ){
                cout << estudiantes[i] << endl;
            }
        }
        void consultarProfesores(){
            for(int i = 0; i < profesores.size(); i++ ){
                cout << profesores[i] << endl;
            }
        }
        void quitarEstudiante(int id){
            estudiantes.erase(estudiantes.begin() + (id-1));
        }
        void quitarProfesor(int id){
            profesores.erase(profesores.begin() + (id-1));
        }
        void guardarEstudiante(Estudiante* e){
            estudiantes.push_back(e);
        }
        void guardarProfesor(Profesor* prof){
            profesores.push_back(prof);
        }
        void registrarEstudiante(Estudiante* e){
            

        }
};

int main(){
    Escuela Uno;

    Estudiante Josue;
    Estudiante Juan;
    Estudiante Alberto;
    Estudiante Roselia;

    Uno.guardarEstudiante(&Josue);
    Uno.guardarEstudiante(&Juan);
    Uno.guardarEstudiante(&Alberto);
    Uno.guardarEstudiante(&Roselia);

    Profesor Benitez;
    Profesor Rosalba;

    Uno.guardarProfesor(&Benitez);
    Uno.guardarProfesor(&Roselia);

    Josue.registrarDatos("Josue", "benito juarez", "30/11/1997");
    Josue.setGrado(1);
    Josue.setGrupo('A');
    Josue.setTutor(&Benitez);

    Juan.registrarDatos("Juan", "aldama", "3/08/1995");
    Juan.setGrado(2);
    Juan.setGrupo('A');
    Juan.setTutor(&Benitez);

    Alberto.registrarDatos("Alberto", "francisco villa", "05/1/1996");
    Alberto.setGrado(2);
    Alberto.setGrupo('B');
    Alberto.setTutor(&Rosalba);

    Roselia.registrarDatos("Roselia", "venustiano carranza", "10/05/1994");
    Roselia.setGrado(3);
    Roselia.setGrupo('C');
    Roselia.setTutor(&Rosalba);


    cout << " ************* BIENVENIDO *************" << endl;
    cout << "Eliga una opcion: " << endl;
    cout << "1 Registrar estudiante" << endl;
    cout << "2 Registrar profesor" << endl;
    cout << "3 Mostrar estudiantes" << endl;
    cout << "4 Mostrar profesores" << endl;

    
}