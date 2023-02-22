#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    /*
    cout<<"Hola mundo!"<<endl;

    float x = 0;

    cout<<"Dame un numero y calculare su cuadrado"<<endl;
    cin>>x;
    cout<<"El numero al cuadrado es: " << x*x << endl;

    

    int i = 15;
    cout<< i << hex << i << endl;


   int i = -3, j = 0, k = 0;

    if( i < 0 ) j = 3 + i * i;

    if ( j > 0 ) k = j - i;

    if( k < 0 ) k ++;

    if (j > k ) k += 30;

    cout<<k;

 

	int byte = 65;
	cout << static_cast<char>(byte) << " " << byte;

    */

   float x = 0x1A;


   cout  << x << endl;

    return 0;
} 

/*

We’ll discuss the conversions later, but for now we only want to 
mention that a phrase written as:

static_cast<newtype>(expr)

changes the type of the expr expression into the newtype type.

What it means is that we can see the ASCII code of any character 
stored within a char variable and vice versa, or see a character whose 
ASCII code is placed inside an int variable.

*/