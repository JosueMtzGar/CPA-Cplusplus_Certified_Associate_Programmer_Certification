#include <iostream>

using namespace std;

int main(){
    char c = 0;

    cout << "char - hexadecimal - octal - decimal" << endl;
    for(c = 0; c < 127; c++){
        cout << c << "-" << hex << static_cast<int>(c) << "-" << oct << static_cast<int>(c) << "-" << dec << static_cast<int>(c) << endl;  
    }

}