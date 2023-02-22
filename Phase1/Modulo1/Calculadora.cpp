//Elaboro: Josue Martinez Garcia

#include<iostream>
#include<cmath>

using namespace std;

int main() {

	//*********************************** Variables a usar ***********************************************
	//Para el swicth
	int i;

	//Para la suma
	float a, b;

	//Para la multiplicacion
	float c, d;

	//Para la divicion
	float e, f;

	//Para la resta
	float g, h;

	//Para el promedio
	float suma(0), n;
	int j, limite;

	//Para el exponente de un numero
	float base, resultado(1);
	int k;
	unsigned int potencia;

	//Para el factorial
	int numero, factorial(1), z;

	//****************************************************************************************************
	
	cout << "****** Bienvenido a la calculadora ******" << endl;

	//******************************************* MENU ****************************************************

	do{
	cout << '\n' << "Eliga con un numero entero en el rango 1-7 que operacion desea realizar: " << '\n';
	cout << "Ingrese 0 para salir" << '\n';
	cout << endl;
    cout << "1. Suma de dos numeros " << '\n';
	cout << "2. Multiplicacion de dos numeros"<< '\n';
	cout << "3. Divicion de dos numeros "<< '\n';
	cout << "4. Resta de dos numeros "<<'\n';
	cout << "5. Realizar el promedio de N numeros "<<'\n';
	cout << "6. Exponente de un numero a la potencia dada"<<'\n';
	cout << "7. Realizar el factorial de un numero "<<'\n';
	cout << endl;
    cout << "Tu eleccion es: ";
	cin >> i;
	cout << endl;

	//****************************************************************************************************

	switch (i)
	{
	//*************************************** SUMA **********************************************************
	case 1:
		cout << "Has elegido la suma de dos numeros" << '\n';
		cout << '\n' << "Introduce el primer numero: " ;
		cin >> a;
		cout << "Introduce el segundo numero: ";
		cin >> b;
		cout << '\n' << "La suma " << a << " + " << b << " da como resultado: " << a+b <<'\n';  
		break;
	//************************************** MULTIPLICACION *************************************************
	case 2:
		cout << "Has elegido la multiplicacion de dos numeros" << '\n';
		cout << '\n' << "Introduce el primer numero: " ;
		cin >> c;
		cout << "Introduce el segundo numero: ";
		cin >> d;
		cout << '\n' << "La multiplicacion " << c << "*" << d << " da como resultado: " << c*d <<'\n'; 		
		break;
	//**************************************** DIVICION ******************************************************
	case 3:
		cout << "Has elegido la divicion de dos numeros" << '\n';
		cout << '\n' << "Introduce el primer numero: " ;
		cin >> e;
		cout << "Introduce el segundo numero (diferente de cero): ";
		cin >> f;
		if (!f)
		{
			do{
				cout << "Debe ser un numero diferente de cero: ";
				cin >> f;
			} while (!f);

			cout << '\n' << "La divicion " << e << "/" << f << " da como resultado: " << e/f <<'\n';
		}else
		{
			cout << '\n' << "La divicion " << e << "/" << f << " da como resultado: " << e/f <<'\n';
		}		
		break;
	//**************************************** RESTA ***************************************************
	case 4:
		cout << "Has elegido la resta de dos numeros" << '\n';
		cout << '\n' << "Introduce el primer numero: " ;
		cin >> g;
		cout << "Introduce el segundo numero: ";
		cin >> h;
		cout << '\n' << "La resta " << g << " - " << h << " da como resultado: " << g-h <<'\n'; 
		
		break;
	//*************************************** PROMEDIO *************************************************
	case 5:		
		cout << "Has elegido realizar el promedio de N numeros" << '\n';
		cout << "Ingrese el valor entero de N: ";
		cin >> limite;
		cout << endl;
		
		for (j = 1; j <= limite; j++){
			
			cout << "Ingrese un numero: ";
			cin >> n;

			suma += n;
		}
		
		cout << '\n' << "El promedio de los " << --j << " numeros que introdujo es: " << suma/j <<'\n';
		break;
	//**************************************** EXPONENCIAL *************************************************
	case 6:
		cout << "Has elegido realizar el exonente de un numero a la potencia dada" << '\n';
		cout << "Ingrese el numero: ";
		cin >> base;
		cout << "Ingrese un numero entero como la potencia: ";
		cin >> potencia;
		cout << endl;

		for (k = 1; k <= potencia; k++)
		{
			resultado *= base;
		}
		
		cout  << '\n' << "El resultado del exponencial " << base << "^" << potencia << " es: " << resultado <<'\n';		
		break;
	//*************************************** FACTORIAL *************************************************
	case 7:
		cout << "Has elegido realizar el factorial de un numero" << '\n';
		cout << "Ingrese el numero: ";
		cin >> numero;
		z=numero;

		do{
			factorial *= numero;
			numero--;
		} while (numero>0);

		cout  << '\n' << "El factorial " << z << "! es: " << factorial << endl;
		
		break;
	//****************************************************************************************************
	default:
		cout << "Esa opcion no es valida" << endl;
		break;
	}

	}while(i);

	cout << "Hasta pronto" << endl;

	return 0;

}