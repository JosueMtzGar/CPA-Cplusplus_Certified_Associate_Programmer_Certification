#ifndef __MARCO_FLYWEIGHT__
#define __MARCO_FLYWEIGHT__

#include <vector>
using namespace std;

class Pixel{
    unsigned char r;
    unsigned char g;
    unsigned char b;
    public:
        Pixel(unsigned char r, unsigned char g, unsigned char b);
};

class Sprite{
    vector<vector<Pixel*>> dato;
    int type;
    public:
        Sprite(int size, int type);
        ~Sprite();
        int getType();
};

class Enemy{
    Sprite *avatar;
    public:
        Enemy(int type);
        Enemy(Sprite *avatar);
        ~Enemy();
};
class SpriteFactory{
    vector<Sprite*> cache;
    public:
        Sprite* getCache(int type);
};

#endif