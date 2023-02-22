#ifndef __PILA__
#define __PILA__

class Pila{
    private:
        int total;
        int contador;
        int *datos;
    public:
        Pila(int total);
        ~Pila();
        void push(int);
        int pop();
        int getTotal();
        /* Pila& operator<<(int);
        Pila& operator>>(int&); */
        int& operator[](int);
};

#endif