#include "Rectangle.h"
#include "Figure.h"

#include <iostream>

using namespace std;

Rectangle::Rectangle()
{
    name="rectangle";
    a=1;
    b=2;
    cout<<"Constructor for Rectangle class"<<endl;
}

Rectangle::Rectangle(string name, float a, float b)
{
    this->name=name;
    this->a=a;
    this->b=b;
    cout<<"Overload constructor for Rectangle class"<<endl;
}

Rectangle::~Rectangle()
{
    cout<<"Virtual destructor for Rectangle"<<endl;
}

void Rectangle::draw(){
    cout<<"Drawing:"<<name<<endl;
}

float Rectangle::field(){
    return a*b;
}

float Rectangle::periphery(){
    return ((2*a)+(2*b));
}
