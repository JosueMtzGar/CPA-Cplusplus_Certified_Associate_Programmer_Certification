#include <iostream>

using namespace std;

float fahrenheit_celsius(float Fahren){
    
    float C = (Fahren - 32)* (5.0/9.0);
    return C;
}

float celsius_fahrenheit(float Celsius){

    float F = (Celsius* (9.0/5.0)) + 32;
    return F;
}

int main(){

    cout << celsius_fahrenheit(-2.96667) << endl;
    cout << fahrenheit_celsius(26.66) << endl;
   
}
