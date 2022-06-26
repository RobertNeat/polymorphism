#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"
#include <iostream>

using namespace std;

class Square:public Rectangle
{
    public:
        Square();
        Square(string name, float a);
        virtual ~Square();

        void draw();
        float field();
        float periphery();
};

#endif // SQUARE_H
