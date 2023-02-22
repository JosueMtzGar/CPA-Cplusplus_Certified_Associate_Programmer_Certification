#include <iostream>

using namespace std;

int max(int a, int b){

/*     float max;
    max = a;

    if(max<b){
        max = b;
    }

    return max; */

    // todo lo anterior se puede escbrir como
        // con    v  f
    return (a>b)?(a):(b);
}

int max(int a, int b, int c){
/* 
    float max;
    max = a;

    if(max<b && c<b){
        max = b;
    };
    if(max<c && b<c){
        max = c;
    };

    return max; */

    //Lo anterior se puede hacer con el operador ternario como sigue

    return (a>b)?( (a>c)?(a):(c) ):( (b>c)?(b):(c) );
}

int main(){

    cout << max(105,65,200) << endl;


}