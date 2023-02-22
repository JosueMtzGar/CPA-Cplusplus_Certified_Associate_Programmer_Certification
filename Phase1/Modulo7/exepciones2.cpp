#include <iostream>

using namespace std;

void fail(int error){

    switch(error){
        case 1:
            throw exception();
            break;
        case 2:
            throw logic_error("logic error");
            break;
        case 3:
            throw runtime_error("runtime error");
            break;
        case 4:
            throw length_error("lenght error (logic error)");
            break;
        case 5:
            throw overflow_error("overflow error (runtime error)");
            break;
        default:
            throw bad_alloc();
            break;
    }
}

int main(){
    for(int i=0; i <7; i++){
        try{
            fail(i);
        }
        catch(overflow_error &error){
            cout << "cth-re-oe: " <<  error.what() << endl;
        }
        catch(length_error &error){
            cout << "cth-le-le: " <<  error.what() << endl;
        }
        catch(logic_error &error){
            cout << "cth-le: " << error.what() << endl;
        }
        catch(runtime_error &error){
            cout <<  "cth-re: " << error.what() << endl;
        }
        catch(exception &error){
            cout << "cth-ex: " <<  error.what() << endl;
        }
        catch(...){
            cout << "catch generico" << endl;
        }
    }    
}