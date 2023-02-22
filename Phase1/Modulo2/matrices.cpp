    #include <iostream>
    #include <time.h>
    #include <vector>

    using namespace std;

    int main(){

    time_t t;
    srand( (unsigned) time(&t) );
    
    float suma, promedio;
    
    //se declara una matriz 31x24
    vector<vector<float>> temp( 31, vector<float>(24) );

    for (int day = 0; day < 31; day++) {
        for (int hour = 0; hour < 24; hour++){

            temp[day][hour] = static_cast<float>( rand()%500 )/10;

            if (temp[day][hour] == temp[day][11]){
                
                suma += temp[day][hour];
                
            }
            
        } 
    }

    promedio = suma/31;
    //ver la matriz

    for (int day = 0; day < 31; day++) {
        for (int hour = 0; hour < 24; hour++){

            cout << temp[day][hour] << " ";
        }
        cout << endl;
    }

    cout << "La temperatura promedio al mediodia es: " << promedio;

    //La temperatura mas grande del mes

    float max = -100000;
    int d, h;

    for (int day = 0; day < 31; day++) {
        for (int hour = 0; hour < 24; hour++){

            if (max < temp[day][hour]){
             max = temp[day][hour];
             d = day;
             h = hour;
            
            }
             
        }
        
    }

    cout << '\n' << "La temperatura maxima del mes es: " << max << " el dia " << d+1 << " a la hora " << h;

}
    