#include <iostream>

using namespace std;

int main(){
    int letras = 0;

    for(letras = 'a'; letras <= 'z'; letras++){
        cout << static_cast<char>(letras-32);
    }
}