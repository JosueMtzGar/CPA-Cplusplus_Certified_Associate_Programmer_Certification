#include <iostream>
#include <vector>

using namespace std;

class Persona{
    private:
        string nombre;
    public:
        Persona(string nombre) : nombre(nombre){} 
        Persona(){}
        void setNombre(string nombre){
            this->nombre = nombre;
        }
        string getNombre(){
            return nombre;
        }
};

class Empleado : public Persona{
    private:
        float salario;
        int turno;
    public:
        string strg_Turno;
        Empleado(string nombre, float salario, int turno): salario(salario), turno(turno), Persona(nombre){}
        Empleado(string nombre, int turno): turno(turno), Persona(nombre){
            setTurno(turno);
        }
        Empleado(){} 
        void setSalario(float salario){
            this->salario = salario;
        }
        float getSalario(){
            return salario;
        }
        void setTurno(int turno){
            this->turno = turno;
            switch(turno){
            case 1:
                strg_Turno = "Matutino"; 
                break;
            case 2:
                strg_Turno = "Vespertino";
                break;
            case 3:
                strg_Turno = "Nocturno";
                break;
            }
        }
        virtual void print(){
            cout << "Nombre: " << getNombre() << endl;
            cout << "Turno: " << strg_Turno << endl;
            cout << "Salario: " << getSalario() << endl;
        }
};

class Paciente;

class Medico : public Empleado{
    public:
        vector<Paciente*> pacientes;
        int consultorio;
        Medico(string nombre, int turno, int consultorio): Empleado(nombre, turno), consultorio(consultorio){
            setSalario(20'000);
        }
        void print(){
            cout << "Nombre: " << getNombre() << endl;
            cout << "Turno: " << strg_Turno << endl;
            cout << "Consultorio: " << consultorio << endl;
            cout << "Salario: " << getSalario() << endl;
        }
        void addPaciente(Paciente* p){
            pacientes.push_back(p);
        }
};

class Secretario : public Empleado{
    public:
        int consultorio;
        Secretario(string nombre,  int turno, int consultorio): Empleado(nombre, turno), consultorio(consultorio){
            setSalario(10'000);
        }
        void print(){
            cout << "Nombre: " << getNombre() << endl;
            cout << "Turno: " << strg_Turno << endl;
            cout << "Consultorio: " << consultorio << endl;
            cout << "Salario: " << getSalario() << endl;
        }
};

class Enfermero : public Empleado{
    public:
        vector<int> camas;
        Enfermero(string nombre, int turno): Empleado(nombre, turno){
            setSalario(15'000);
        }
        void print(){
            cout << "Nombre: " << getNombre() << endl;
            cout << "Turno: " << strg_Turno << endl;
            cout << "Camas: " << camas.size() << endl;
            cout << "Salario: " << getSalario() << endl;
        }
};

class Paciente : public Persona{
    private:
        int dias;
        string enfermedad;
        Medico* m;
        Enfermero* en;
    public:
        Paciente(string nombre, int dias, string enfermedad): dias(dias), enfermedad(enfermedad), Persona(nombre){}
        void setDias(int dias){
            this->dias = dias;
        }
        int getDias(){
            return dias;
        }
        void setEnfermedad(string enfermedad){
            this->enfermedad = enfermedad;
        }
        string getEnfermedad(){
            return enfermedad;
        }
        Medico* getMedico(){
            return m;
        }
        void setMedico(Medico* m){
            this->m = m;
        }
        Enfermero* getEnfermero(){
            return en;
        }
        void setEnfermero(Enfermero* en){
            this->en = en;
        }
        void print(){
            cout << "Nombre: " << getNombre() << endl;
            cout << "Dias a hospitalizar: " << getDias() << endl;
            cout << "Enfermedad: " << getEnfermedad() << endl;
            cout << "** Medico ** " << endl; 
            m->print();
            cout << "** Enfermero ** " << endl;
            en->print();
        }

};

class Hospital{
    private:
        //vector<Empleado*> empleados;
        vector<Medico*> medicos;
        vector<Secretario*> secretarios;
        vector<Enfermero*> enfermeros;
        vector<Paciente*> pacientes;
    public:
        bool funcionando;
        Hospital(){
            funcionando = true;
        }
        void ejecutar(){
            //variable para opciones
            int opc;
            
            //inicia ejecucion
            cout << "******** Bienvenido al Hospital ********" << endl;
            while(this->funcionando){
                mostrarOpciones();
                int id = 0;
                string nombre;
                
                cout << "> Su opcion: ";
                cin >> opc;
                getline(cin,nombre);

                if(-1 < opc && opc <9){
                    switch(opc){
                        case 0:
                            funcionando = false;
                            break;
                        case 1:
                            if(medicos.size()<=2){
                                registrarMedico();
                            }else{
                                cout << "* Medicos completos *" << endl;
                            }
                            break;
                        case 2:
                            if(secretarios.size()<=1){
                                registrarSecretario();
                            }else{
                                cout << "* Secretarios completos *" << endl;
                            }
                            break;
                        case 3:
                            if(enfermeros.size()<=3){
                                registrarEnfermero();
                            }else{
                                cout << "* Enfermeros completos *" << endl;
                            }
                            break;
                        case 4:
                            if(pacientes.size()<=10){
                                registrarPaciente();
                            }else{
                                cout << "* Hospital lleno *" << endl;
                            }
                            break;
                        case 5:
                            mostrarEmpleados();
                            break;
                        case 6:
                            mostrarPacientes();
                            break;
                        case 7:
                            cout << "Indique el id del paciente: ";
                            cin >> id;
                            darAlta(id); 
                            break;
                    }
                }else{
                    cout << "Opcion invalidad!" << endl;
                }
            }
        }
        /* Funciones utilizadas en ejecucion */
        void mostrarOpciones(){
            cout << "************************" << endl;
            cout << "1 Registrar Medico" << endl;
            cout << "2 Registrar Secretario" << endl;
            cout << "3 Registrar Enfermero" << endl;
            cout << "4 Registrar Paciente" << endl;
            cout << "5 Mostrar Empleados" << endl;
            cout << "6 Mostrar Pacientes" << endl;
            cout << "7 Dar de alta paciente" << endl;
            cout << "0 Salir" << endl;
            cout << "************************" << endl;
        }
        void registrarMedico(){
            string nombre("Sin asignar");
            int turno(1), consultorio(1);
            cout << "Nombre : ";
            getline(cin,nombre);
            cout << "Turno (1- Matutino, 2- Vespertino, 3- Nocturno): ";
            cin >> turno;
            while(turno<1 || 3<turno){
                cout << "Opcion no valida!" << endl;
                cout << "Turno (1- Matutino, 2- Vespertino, 3- Nocturno): ";
                cin >> turno;
            }
            do{
            cout << "Consultorio (1-5): ";
            cin >> consultorio;
            }while(consultorio<1 || 5<consultorio);
            Medico* m = new Medico(nombre, turno, consultorio);
            m->setNombre(nombre);
            medicos.push_back(m);
        }
        void registrarSecretario(){
            string nombre;
            int turno, consultorio;
            cout << "Nombre : ";
            getline(cin,nombre);
            do{
            cout << "Turno (1- Matutino, 2- Vespertino, 3- Nocturno): ";
            cin >> turno;
            }while(turno<1 || 3<turno);
            do{
            cout << "Consultorio (1-5): ";
            cin >> consultorio;
            }while(consultorio<1 || 5<consultorio);
            Secretario* s = new Secretario(nombre, turno, consultorio);
            secretarios.push_back(s);
        }
        void registrarEnfermero(){
            string nombre("Sin asignar");
            int turno(1), cama(1);
            cout << "Nombre: ";
            getline(cin,nombre);
            do{
            cout << "Turno (1- Matutino, 2- Vespertino, 3- Nocturno): ";
            cin >> turno;
            }while(turno<1 || 3<turno);
            Enfermero* en = new Enfermero(nombre, turno);
            cout << "No. de camas: ";
            cin >> cama;
            for(int i = 1; i <= cama; i++){
                en->camas.push_back(i);
            }
            enfermeros.push_back(en);
        }
        void registrarPaciente(){
            string nombre, enfermedad, medico, enfermero;
            int dias;
            Medico* me;
            Enfermero* enf;

            cout << "Nombre: ";
            getline(cin,nombre);
            cout << "Dias a hospitalizar: ";
            cin >> dias;
            cout << "Enfermedad: ";
            getline(cin,enfermedad);
            cout << endl;
            Paciente* p = new Paciente(nombre, dias, enfermedad);

            /* cout << "Nombre de su medico: ";
            getline(cin,medico);
            for(int i = 0; i < empleados.size(); i++){
                if(medico == empleados[i]->getNombre()){
                    me = dynamic_cast<Medico*> (empleados[i]);
                    p->setMedico(me);
                    me->addPaciente(p);
                }
            }
            cout << "Nombre de enfermero: ";
            getline(cin,enfermero);
            for(int i = 0; i < empleados.size(); i++){
                if(enfermero == empleados[i]->getNombre()){
                    enf = dynamic_cast<Enfermero*> (empleados[i]);
                    p->setEnfermero(enf);
                }
            } */
            pacientes.push_back(p);
        }
        void mostrarEmpleados(){
            for(int i = 0; i < medicos.size(); i++){
                cout << ">Medico con id " << i+1 << endl;
                medicos[i]->print();
            }
            for(int i = 0; i < secretarios.size(); i++){
                cout << ">Secretario con id " << i+1 << endl;
                secretarios[i]->print();
            }
            for(int i = 0; i < enfermeros.size(); i++){
                cout << ">Enfermero con id " << i+1 << endl;
                enfermeros[i]->print();
            }
        }
        void mostrarPacientes(){
            for(int i = 0; i < pacientes.size(); i++){
                cout << "Paciente con id " << i+1 << endl;
                pacientes[i]->print();
            }
        }
        void darAlta(int id){
            pacientes.erase(pacientes.begin() + (id-1));
        }
        /* void despedirEmpleado(int id){
            empleados.erase(empleados.begin() + (id-1));
        } */
        ~Hospital(){
            for(int i = 0; i < pacientes.size(); i++){
                delete pacientes[i];
            }
            for(int i = 0; i < medicos.size(); i++){
                delete medicos[i];
            }
            for(int i = 0; i < secretarios.size(); i++){
                delete secretarios[i];
            }
            for(int i = 0; i < enfermeros.size(); i++){
                delete enfermeros[i];
            }
        }
};

int main(){
    Hospital h;
    h.ejecutar();

    return 0;
}