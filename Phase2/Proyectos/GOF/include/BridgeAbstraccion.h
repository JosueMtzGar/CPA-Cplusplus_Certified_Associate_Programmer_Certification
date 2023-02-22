
#ifndef __MARCO_BRIDGE_ABSTRACCION__
#define __MARCO_BRIDGE_ABSTRACCION__

#include <string>

using namespace std;

class Color{
    protected:
        string hex;
    public:
        void applyColor();
        Color();
};
class Green : public Color{
    public:
        Green();
};
class Red : public Color{
    public:
        Red();
};
class Blue : public Color{
    public:
        Blue();
};

#endif