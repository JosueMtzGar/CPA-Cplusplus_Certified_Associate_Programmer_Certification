#include <iostream>
#include <vector>

using namespace std;

int apuntador = 0;
int n = 0; //contador de alumnos creados; 
vector<float> Mejores5(50);

struct Alumno{
    string nombre;
    int grado;
    char grupo;
    int cant_materias; //total de materia
    int** calificaciones; //calificaciones [materia][unidad]
    string* materias; //nombre de cada materia
    int* cant_unidades; // por cada materia
    float* promedios_por_materia;
    float promedio_total; //promedio de todas las materias
    bool creado;
};

void imprimir(Alumno al){
    cout << "Nombre: " << al.nombre << endl;
    cout << "Grado y Grupo: " << al.grado << " " << al.grupo << endl;
    cout << "Materia: " << endl;
    cout << "Nombre mat | unidad - calificacion" << endl;
    for(int materia = 0; materia < al.cant_materias; materia++){
        cout << al.materias[materia] << " ";
        for(int unidad = 0; unidad < al.cant_unidades[materia]; unidad++){
            cout << (unidad+1) << ":" << al.calificaciones[materia][unidad] << " ";
        }
        cout << endl;
    }
}

void GenerarArraysMaterias(Alumno* al){
    const int MaxMaterias = 5, MaxUnidades = 4;

    //al[apuntador].cant_materias = 5;
    al[apuntador].calificaciones = new int*[MaxMaterias];
    al[apuntador].materias = new string[MaxMaterias];
    al[apuntador].cant_unidades = new int[MaxUnidades];
    al[apuntador].promedios_por_materia = new float[MaxMaterias];
}

void LlenarMaterias(Alumno* al){
    float suma_unidades(0), suma_materias(0), promedio_unidades;
    cout << "Indique el numero de materias del alumno: ";
    cin >> al[apuntador].cant_materias;
    
    for(int j = 0; j < al[apuntador].cant_materias; j++){
        /* Inicializando materia #j */
        cout << "Nombre de la Materia " << j+1 << " :";
        cin >> al[apuntador].materias[j];
        cout << endl;
        cout << "Indique cuantas unidades tiene la materia: ";
        cin >> al[apuntador].cant_unidades[j];
        al[apuntador].calificaciones[j] = new int[al[apuntador].cant_unidades[j]];
        cout << endl;
        /* Asignando calificacion a la materia j, unidad i */
        for(int i = 0; i < al[apuntador].cant_unidades[j]; i++){
            cout << "Calificacion de la Materia " << al[apuntador].materias[j] << " en la unidad " << i+1 << " :";
            cin >> al[apuntador].calificaciones[j][i];
            //suma de calificaciones de para promedio por materia
            suma_unidades += al[apuntador].calificaciones[j][i];
        }
        //Se obtiene el promedio de la materia j
        al[apuntador].promedios_por_materia[j] = suma_unidades/static_cast<float>(al[apuntador].cant_unidades[j]);
        //suma para el promedio de todas la materias (promedio total)
        suma_materias += al[apuntador].promedios_por_materia[j];
    }
    //promedio de todas la materias de un alumno (promedio total)
    al[apuntador].promedio_total = suma_materias/static_cast<float>(al[apuntador].cant_materias);
}

void PromMateria5(Alumno* al){
    float max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < al[i].cant_materias; j++){
            if(al[i].promedios_por_materia[j] > max && al[i].promedios_por_materia[j] > al[i+1].promedios_por_materia[j]){
                max = al[i].promedios_por_materia[j];
            };
        }
    }
}

int main(){
    /* Maximo de alumnos en la escuela 10 */
    const int MaxAlumnos = 50;
    int NumAlumnos; //Variable para los ciclos en el registro de alumnos
    Alumno *escuela = new Alumno[MaxAlumnos]; //creacion de arreglo de estructuras
    int opc; //variable para el menu de opciones

    //Inicializando con false los alumnos no creados
    for(int i = 0; i < MaxAlumnos; i++){
        escuela[i].creado = false;
    }

    do{
    cout << "******* Bienvenido *******" << endl;
    cout << "Que desea realizar?: " << endl;
    cout << "1 - Registrar alumnos." << endl;
    cout << "2 - Mostrar reporte de 5 mejores promedios." << endl;
    cout << "0 - Salir" << endl;
    cin >> opc;
    cout << endl;

        switch(opc){
        case 1:
            cout << "Cuantos alumnos registrara?: ";
            cin >> NumAlumnos;
            for(int i = 0; i < NumAlumnos; i++){
                cout << "Nombre del Alumno: ";
                cin >> escuela[i].nombre;
                escuela[i].creado = true;
                if(escuela[i].creado = true)
                    n++;
                cout << "Grado: ";
                cin >> escuela[i].grado;
                cout << "Grupo: ";
                cin >> escuela[i].grupo;
                GenerarArraysMaterias(escuela);
                LlenarMaterias(escuela);
                apuntador++;
            }
            break;
        case 2:
            for(int i = 0; i < NumAlumnos; i++){
                imprimir(escuela[i]);
            }
            break;
        }
    }while(opc);

    /* Borrando datos */
    for(int i = 0; i < MaxAlumnos; i++){
        if(escuela[i].creado){
            for(int materia = 0; materia < escuela[i].cant_materias; materia++){
                /* Borrando unidades */
                delete [] escuela[i].calificaciones[materia];
            }
            /* Borrando materias */
            delete [] escuela[i].calificaciones;
            /* Borrando strings de materia */
            delete [] escuela[i].materias;
            /* borrando array de cantidad de unidades */
            delete [] escuela[i].cant_unidades;
            /* borrando array de promedios por materia */
            delete [] escuela[i].promedios_por_materia;
        }
    }
    /* Borrando escuela */
    delete [] escuela;
}
