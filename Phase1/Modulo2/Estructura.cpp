#include <iostream>

using namespace std;

struct Date{
    int year, month, day;

}the_date_of_the_end_of_the_world;

struct Estudiante{
    string nombre;
    float tiempo;
    int capitulo;
    Date fecha;
};

int main(){
    Estudiante est1;
    est1.nombre = "Josue";
    est1.tiempo = 3.5f;
    est1.capitulo = 1;
    est1.fecha.year = 2022;

    Date dateOfBirthday;
    dateOfBirthday.year = 1997;
    dateOfBirthday.month = 11;
    dateOfBirthday.day = 30;

    cout << sizeof(the_date_of_the_end_of_the_world);

}
