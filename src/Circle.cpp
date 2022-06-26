#include "Circle.h"
#include "Figure.h"

#include <iostream>
#include <math.h>

using namespace std;

Circle::Circle()
{
    name="circle";
    radius=1;
    cout<<"Constructor for Circle class"<<endl;
}

Circle::Circle(string name, float radius)
{
    this->name=name;
    this->radius=radius;
    cout<<"Overloaded constructor for Circle class"<<endl;
}

Circle::~Circle()
{
    cout<<"Destructor for Circle class"<<endl;
}

void Circle::draw(){
    cout<<"Drawing circle:"<<name<<endl;
}

float Circle::field(){
    return  M_PI*radius*radius;
}

float Circle::periphery(){
    return  2*M_PI*radius;
}
