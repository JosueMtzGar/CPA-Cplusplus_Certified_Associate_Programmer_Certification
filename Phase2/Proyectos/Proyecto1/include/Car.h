#ifndef Car_H
#define Car_H

class Car{
    private:
        int llantas, puertas;
    public:
        Car();
        Car(int);
        Car(int, int);
        int getLlantas();
        int getPuertas();
        void setLlantas(int);
        void setPuertas(int);
};

#endif