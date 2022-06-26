#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Figure.h"
#include <iostream>

using namespace std;

class Rectangle: public Figure
{
    public:
        Rectangle();
        Rectangle(string name, float a, float b);
        virtual ~Rectangle();

        virtual void draw();

        virtual float field();
        virtual float periphery();

    protected:
        float a;    //class reactangle will inherit that field

    private:
        float b;
};

#endif // RECTANGLE_H
