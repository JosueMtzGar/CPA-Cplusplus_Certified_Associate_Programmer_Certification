#include <iostream>
#include <vector>

using namespace std;

void modifica(int *var){
    cout << &var << endl;
    //var = 20;
    //cout << &var << endl;
}

int main(){
    //vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
    int var_ent = 10;
    int *var; //= &var_ent; vec.data();
    cout << &var << endl;
    modifica(var);
    
    //cout << &var_ent << endl;


    //cout << &var[1] << " " << var[1] << endl;
    //cout << &vec[1] << " " << vec[1] << endl;
}