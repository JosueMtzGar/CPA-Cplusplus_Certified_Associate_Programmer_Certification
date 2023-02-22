#include "Flyweight.h"


Pixel::Pixel(unsigned char r, unsigned char g, unsigned char b): r(r), g(g), b(b) {
}

/* se asigno dato? */
Sprite::Sprite(int size, int type){
    this->type = type;
    for(int i=0; i<size; i++){
        vector<Pixel*> row;
        for(int j=0; j<size; j++){
            Pixel *p = nullptr;
            if(type == 1)
                p = new Pixel(200,0,0);
            else if(type == 2)
                p = new Pixel(0,200,0);
            else
                p = new Pixel(0,0,200);
            row.push_back(p);
        }
        this->dato.push_back(row);
    }
}
Sprite::~Sprite(){
    for(int i=0; i<dato.size(); i++){
        for(int j=0; j<dato[i].size(); j++){
            delete dato[i][j];
        }
    }
}
int Sprite::getType(){
    return this->type;
}

Enemy::Enemy(int type){
    if(type == 1 || type == 2 || type == 3){
        this->avatar = new Sprite(32, type);
    }
    else{
        throw -1;
    }
}
Enemy::Enemy(Sprite * avatar){
    this->avatar = avatar;
}
Enemy::~Enemy(){
    //delete avatar;
}

Sprite* SpriteFactory::getCache(int type){
    for(int i = 0; i<cache.size(); i++){
        if(cache[i]->getType() == type)
            return cache[i];
    }
    Sprite * s = new Sprite(32, type);
    cache.push_back(s);
    return s;
}