
#include "BridgeAbstraccion.h"


void Color::applyColor(){
    string command = "color "+hex;
    system(command.c_str());
}

Color::Color(){
    hex = "0F";
}
Green::Green(){
    hex = "0A";
}
Red::Red(){
    hex = "0C";
}
Blue::Blue(){
    hex = "0B";
}