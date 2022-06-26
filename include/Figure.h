#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>

using namespace std;

class Figure
{
    public:
        Figure();
        Figure(string name);
        virtual ~Figure();

        void info();    //prints figure name
        virtual void draw();    //prints "drawing figure <figure name>"

        virtual float field()=0; //returns field value
        virtual float periphery()=0; //returns periphery value

        void display();   //calls for info(), draw(), field(), periphery()
    protected:
        string name;
};

#endif // FIGURE_H
