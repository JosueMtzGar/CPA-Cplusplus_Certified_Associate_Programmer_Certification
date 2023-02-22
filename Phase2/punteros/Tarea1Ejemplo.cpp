

#include <iostream>

using namespace std;

struct Alumno{
    string nombre;
    int grado;
    char grupo;
    int cant_materias; // total de materias
    int **calificaciones; // calificaciones[materia][unidad]
    string *materias; // nombre de cada materia
    int *cant_unidades; // por cada materia
    bool creado;
};

void imprimir(Alumno al){
    cout << "Nombre: " << al.nombre<<endl;
    cout << "Grado y Grupo: "<< al.grado << " "<< al.grupo<<endl;
    cout << "Materias:" << endl;
    cout << "Nombre mat | unidade:calificacion"<<endl;
    for(int materia = 0; materia < al.cant_materias; materia++){
        cout << al.materias[materia] << " ";
        for(int unidad = 0; unidad < al.cant_unidades[materia]; unidad++){
            cout <<(unidad+1) <<":"<< al.calificaciones[materia][unidad] << " ";
        }
        cout << endl;
    }
}

int main(){
    /* Máximo de alumnos en la escuela 100 */
    Alumno *escuela = new Alumno[100];
    
    for(int i = 0; i<100; i++){
        escuela[i].creado = false;
    }

    /* asignando nombre */
    escuela[0].nombre = "Raul";
    escuela[0].creado = true;
    
    /* Generando los arrays de materias (son 5 materias) */
    escuela[0].cant_materias = 5;
    escuela[0].calificaciones = new int*[5];
    escuela[0].materias = new string[5];
    escuela[0].cant_unidades = new int[5];
    
    /* inicializando materia #1 espanol */
    escuela[0].materias[0] = "espanol";
    escuela[0].calificaciones[0] = new int[1]; 
    escuela[0].cant_unidades[0] = 1;
    /* asignando calificacion a la materia espanol, unidad 1 */
    escuela[0].calificaciones[0][0] = 10;

    /* inicializando materia #2 matematicas */
    escuela[0].materias[1] = "matematicas";
    escuela[0].calificaciones[1] = new int[4];
    escuela[0].cant_unidades[1] = 4;
    /* asignando calificacion a la materia matematicas, unidad i */
    for(int i = 0; i<4; i++)
        escuela[0].calificaciones[1][i] = 10;

    escuela[0].materias[2] = "fisica";
    escuela[0].calificaciones[2] = new int[4];
    escuela[0].cant_unidades[2] = 4;
    /* asignando calificacion a la materia fisica, unidad i */
    for(int i = 0; i<4; i++)
        escuela[0].calificaciones[2][i] = 10;

    escuela[0].materias[3] = "quimica";
    escuela[0].calificaciones[3] = new int[4];
    escuela[0].cant_unidades[3] = 4;
    /* asignando calificacion a la materia quimica, unidad i */
    for(int i = 0; i<4; i++)
        escuela[0].calificaciones[3][i] = 10;

    escuela[0].materias[4] = "programacion";
    escuela[0].calificaciones[4] = new int[4];
    escuela[0].cant_unidades[4] = 4;
    /* asignando calificacion a la materia programacion, unidad i */
    for(int i = 0; i<4; i++)
        escuela[0].calificaciones[4][i] = 10;

    escuela[0].grupo = 'A';
    escuela[0].grado = 1;

    imprimir(escuela[0]);

    /* Borrando datos */
    for(int i = 0; i < 100; i++){
        if(escuela[i].creado){ /* si fue creado por alumno se borra: */
            for(int materia = 0; materia < escuela[i].cant_materias; materia++){
                /* borrando unidades */
                delete [] escuela[i].calificaciones[materia];
            }
            /* borrando materias */
            delete [] escuela[i].calificaciones;
            /* borrando strings de materias*/
            delete [] escuela[i].materias;
            /* borrando array de cantidad de unidades */
            delete [] escuela[i].cant_unidades;
        }
    }
    /* borrando escuela */
    delete [] escuela;
}



