#ifndef _JOSUE_STRATEGY_
#define _JOSUE_STRATEGY_

#include <iostream>
#include <string.h>

using namespace std;

class Strategy{
    public:
        virtual void execute(string, string);
};

class VehiculoStrategy: public Strategy{
    public:
        void execute(string, string);
};

class AvionStrategy: public Strategy{
    public:
        void execute(string, string);
};

class BarcoStrategy: public Strategy{
    public:
        void execute(string, string);
};

/*context */
class GPS{
    Strategy* strategy;
    public:
        GPS();
        void setStrategy(Strategy*);
        void doSomething();
        ~GPS();
};

#endif