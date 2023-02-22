#include "Decorator.h"

#include <iostream>
#include <string>

using namespace std;

Component::Component(string msg): msg(msg){}
void Component::notifica(){
    cout << msg << endl;
}
void Component::setMsg(string msg){
    this->msg = msg;
}
string Component::getMsg(){
    return this->msg;
}

Decorator::Decorator(string msg): Component(msg){
    c = nullptr;
}
void Decorator::envuelve(Component * c){
    this->c = c;
}
Component* Decorator::getComponent(){
    return this->c;
}
void Decorator::notifica(){
    if(c != nullptr)
        c->notifica();
}

Facebook::Facebook(string msg): Decorator(msg){}
void Facebook::notifica(){
    cout << "Facebook: " << getMsg() << endl;
    Decorator::notifica();
}

Instagram::Instagram(string msg): Decorator(msg){}
void Instagram::notifica(){
    cout << "Instagram: " << getMsg() << endl;
    Decorator::notifica();
}

Twitter::Twitter(string msg): Decorator(msg){}
void Twitter::notifica(){
    cout << "Twitter: " << getMsg() << endl;
    Decorator::notifica();
}
