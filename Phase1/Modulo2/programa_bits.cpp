//Elaboro: Josue Martinez Garcia
//Tarea opcional

#include <iostream>
#include <bitset>  //Para obtener la representacion en binario de un numero entero

using namespace std;

int main(){

    //************************** Variables a usar ***************************************************************************

    unsigned int interruptores;
    short i;

    int j, k, posicion;

    int maskon(1), maskoff(1);

    // ************************ MENU ***************************************************************************************
    
    cout << '\n' << "Introdusca un entero positivo que representa los estados de los interruptores: ";
    cin >> interruptores; 
    cout << "El estado de los interruptores es:" << '\n';
    cout << std::bitset<32>(interruptores) << '\n';
    do{
    cout << '\n' << "Eliga con 1 o 2 que desea realizar con el numero que ingreso" << '\n';
    cout << "Ingrese 0 para salir" << '\n';
    cout << '\n';
    cout << "1. Activar un interruptor" << '\n';
    cout << "2. Desactivar un interruptor" << '\n';
    cout << '\n' << "Tu eleccion es: ";
    cin >> i;

    //**********************************************************************************************************************

    
    switch (i)
    {
    case 1:
         cout << "Introduce el numero de interruptor (de 0 a 31) que desea prender: ";
         cin >> j;
         posicion = j;

        //se crea la mascara con un entero que tendra un 1 en la posicion j en la representacion binaria
         for(int l = 1; l <= j; l++){

            maskon *= 2;

        }

        //Se activa el interruptor en la posicion j
        interruptores |= maskon;              // se aprovecha la propiedad de disyuncion
        cout << "El estado de los interruptores es:" << '\n';
        cout << std::bitset<32>(interruptores) << '\n';

        //checa el estado del bit
        if (interruptores & maskon){
            cout << '\n' << "El interruptor en la posicion " << posicion << " esta activado." << endl;
        }else{
           cout << '\n' << "El interruptor en la posicion " << posicion << " esta  desactivado." << endl;
        }
        maskon = 1;  //se resetea la mascara     
        break;

     //************************************************************************************************************************************   
    case 2:
         cout << "Introduce el numero de interruptor (de 0 a 31) que desea apagar: ";
         cin >> k;
         posicion = k;

         //se crea la mascara con un entero que tendra un 1 en la posicion k en la representacion binaria
         for(int l = 1; l <= k; l++){

            maskoff *= 2;

        }

         //se desactiva el interruptor en la posicion k. (Al negar maskoff se hace 0 el interruptor en la posicion de interes y en las demas 1)
        interruptores &= ~maskoff;           //se aprovecha la prodiedad de conjuncion.
        cout << "El estado de los interruptores es:" << '\n';
        cout << std::bitset<32>(interruptores) << '\n';

         //checa el estado del bit
        if (interruptores & maskoff){
            cout << '\n' << "El interruptor en la posicion " << posicion << " esta activado." << endl;
        }else{
           cout << '\n' << "El interruptor en la posicion " << posicion << " esta  desactivado." << endl;
        }
        maskoff = 1; //se resetea la mascara
        break;
    
    default:
        cout << "Esa opcion no es valida" << '\n';
        break;
    }
    }while (i);   
    
    cout << "Hasta pronto";
}