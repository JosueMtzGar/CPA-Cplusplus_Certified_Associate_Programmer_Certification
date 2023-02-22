#ifndef __MARCO_SINGLETON__
#define __MARCO_SINGLETON__

/* Definición de nuestra clase */
class Singleton{
    private:
        static Singleton* instance;
        Singleton(int valor);
        Singleton(Singleton &);
        int valor;
    public:
        int getValor();
        static Singleton* getInstance(int);
};

#endif
