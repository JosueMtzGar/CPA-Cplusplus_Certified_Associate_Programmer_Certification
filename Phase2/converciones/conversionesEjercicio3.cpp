#include <iostream>

using namespace std;

int main(){
    double div = 5;
    int val = 10;
    if(val % static_cast<int>(div) == 0){
        cout << "Is working for now" << endl;
    }
    else{
        cout << "not working" << endl;
    }
    if(sizeof(div) == 8){
        cout << "Finex2" << endl;
    }
}