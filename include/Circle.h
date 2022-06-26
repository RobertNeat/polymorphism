#ifndef CIRCLE_H
#define CIRCLE_H

#include <Figure.h>
#include <iostream>

using namespace std;

class Circle: public Figure
{
    public:
        Circle();
        Circle(string name,float radius);
        virtual ~Circle();

        void draw();

        float field();
        float periphery();

    protected:
        float radius;
};

#endif // CIRCLE_H
