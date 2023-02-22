/* Este codigo imprime las letras que son diferentes
entre dos palabras */
#include <iostream>
#include <string>

using namespace std;

int main(){
    string texto1, texto2;
    bool dif;

    cout << "Introdusca el texto 1: ";
    cin >> texto1;
    cout << "Introdusca texto 2: ";
    cin >> texto2;

    int length1 = texto1.length();
    int length2 = texto2.length();

    if( length1>length2 ){
        for(int i = 0; i < length1; i++){
            if( texto1[i] != texto2[i]){
                cout << '"' << texto1[i] << " " << texto2[i] << '"' << endl;
            }
        }
    }else{
        for(int i = 0; i < length2; i++){
            if( texto2[i] != texto1[i]){
                cout << '"' << texto1[i] << " " << texto2[i] << '"' << endl;
            }
        }
    }
}