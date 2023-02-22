#ifndef __MARCO_DECORATOR__
#define __MARCO_DECORATOR__

#include <string>
using namespace std;

class Component{
    string msg;
    public:
        Component(string);
        virtual void notifica();
        void setMsg(string);
        string getMsg();
};

class Decorator: public Component{
    Component *c;
    public:
        Decorator(string);
        void envuelve(Component *); // set
        Component* getComponent();
        virtual void notifica();
};
class Facebook: public Decorator{
    public:
        Facebook(string);
        virtual void notifica();
};
class Instagram: public Decorator{
    public:
        Instagram(string);
        virtual void notifica();
};
class Twitter: public Decorator{
    public:
        Twitter(string);
        virtual void notifica();
};

#endif 