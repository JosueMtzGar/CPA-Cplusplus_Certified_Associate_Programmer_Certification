#include <iostream>
#include <vector>

using namespace std;

class Estudiante;
class Profesor;
class Persona;
class Escuela;

class Persona{
    string nombre;
    string direccion;
    string fecha_nac;
    public:
        Persona(string nombre, string direccion, string fecha_nac): nombre(nombre), direccion(direccion), fecha_nac(fecha_nac){}
        Persona(){}
        string getNombre(){
            return this->nombre;
        }
        string getDireccion(){
            return this->direccion;
        }
        string getFecha_nac(){
            return this->fecha_nac;
        }
        void setNombre(string nombre){
            this->nombre = nombre;
        }
        void setDireccion(string direccion){
            this->direccion = direccion;
        }
        void setFecha_nac(string fecha_nac){
            this->fecha_nac = fecha_nac;
        }
        void print(){
            cout << "Nombre: "<< nombre << " Fecha de nacimiento: " << fecha_nac <<" ";
        }
};
class Profesor: public Persona{
    string materia;
    vector <Estudiante*> asesorado;
    public:
        Profesor(): Persona("","","") {}
        Profesor(string nombre, string direccion, string fecha_nac):Persona(nombre, direccion, fecha_nac){}
        void setMateria(string materia){
            this->materia = materia;
        }
        void addEstudiante(Estudiante * estudiante){
            this->asesorado.push_back(estudiante);
        }
        Estudiante *getEstudiante(int id){
            return asesorado[id];
        }
        int alumnosAsesorados(){
            return asesorado.size();
        }
        void print(){
            Persona::print();
            cout << "Materia: "<< materia << endl;
        }
};
class Estudiante: public Persona{
    int grado;
    char grupo;
    Profesor *tutor;
    public:
        Estudiante(): Persona("","","") {}
        Estudiante(string nombre, string direccion, string fecha_nac):Persona(nombre, direccion, fecha_nac){}
        int getGrado(){
            return grado;
        }
        char getGrupo(){
            return grupo;
        }
        Profesor *getTutor(){
            return tutor;
        }
        void setGrado(int grado){
            this->grado = grado;
        }
        void setGrupo(char grupo){
            this->grupo = grupo;
        }
        void setTutor(Profesor *tutor){
            this->tutor = tutor;
        }
        void print(){
            Persona::print();
            cout << "Grado: "<< grado << " Grupo: "<< grupo <<endl << "Tutor: ";
            tutor->print();
            cout << endl<< endl;
        }
};
class Escuela{
    vector<Estudiante*> estudiantes;
    vector<Profesor *> profesores;
    bool enClase;
    public:
        Escuela(){
            enClase = true;
        }
        void ejecutar(){
            while(this->enClase){
                int opc;
                mostrarOpciones();
                cout << "Introducir opcion" << endl;
                
                string nombre;
                string direccion;
                string fecha;
                string materia;
                int profesor;

                cin >> opc; //\n
                getline(cin, nombre);

                switch(opc){
                    case 1:
                        registrarAlumno();
                    break;
                    case 2:
                        verAlumnos();
                    break;
                    case 3:
                        registrarProfesor();
                    break;
                    case 4:
                        verProfesores();
                    break;
                    case 5:
                        this->enClase = false;
                        cout << "Ciclo escolar terminado" << endl;
                    break;
                }
            }
        }
        void mostrarOpciones(){
            cout << "1) Registrar alumno"<<endl;
            cout << "2) Mostrar alumnos"<<endl;
            cout << "3) Registrar Profesor"<<endl;
            cout << "4) Mostrar profesores"<<endl;
            cout << "5) Terminar ciclo escolar"<<endl;
        }
        void registrarAlumno(){
            string nombre, direccion, fecha_nac = "DD/DD/DD";
            int profesor, grado = 1;
            char grupo = 'A';
            if(profesores.size() > 0){
                cout << "Introducir nombre" << endl;
                getline(cin, nombre);
                cout << "Introducir direccion" << endl;
                getline(cin, direccion);
                cout << "id del profesor" << endl;
                cin >> profesor;
                Estudiante * e = new Estudiante(nombre, direccion, fecha_nac);
                e->setGrado(grado);
                e->setGrupo(grupo);
                e->setTutor(profesores[profesor]);
                profesores[profesor]->addEstudiante(e);
                estudiantes.push_back(e);
            }
            else{
                cout << "No hay profesores"<<endl;
            }
        }
        void registrarProfesor(){
            string nombre, direccion, fecha_nac = "FF/FF/FF", materia = "Ingles";
            cout << "Introducir nombre" << endl;
            getline(cin, nombre);
            cout << "Introducir direccion" << endl;
            getline(cin, direccion);
            Profesor *p = new Profesor(nombre, direccion, fecha_nac);
            p->setMateria(materia);
            profesores.push_back(p);
        }
        void verAlumnos(){
            cout << "Alumnos"<<endl<<endl;
            for(int i= 0; i < estudiantes.size(); i++){
                cout << (i+1) << ") ";
                estudiantes[i]->print();
            }
        }
        void verProfesores(){
            cout << "Profesores"<<endl<<endl;
            for(int i= 0; i < profesores.size(); i++){
                cout << (i+1) << ") ";
                profesores[i]->print();
            }
        }
        ~Escuela(){
            for(int i= 0; i < estudiantes.size(); i++){
                delete estudiantes[i];
            }
            for(int i= 0; i < profesores.size(); i++){
                delete profesores[i];
            }
        }
};

int main(){
    Escuela escuela;
    escuela.ejecutar();
}