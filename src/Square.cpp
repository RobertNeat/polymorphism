#include "Square.h"
#include "Rectangle.h"

#include <iostream>

using namespace std;

Square::Square()
{
    name="square";
    a=2;
    cout<<"Constructor for Square"<<endl;
}

Square::Square(string name, float a)
{
    this->name=name;
    this->a=a;
    cout<<"Overloaded constructor for Square"<<endl;
}

Square::~Square()
{
    cout<<"Destructor for Square class"<<endl;
}

void Square::draw(){
    cout<<"Drawing: "<<name<<endl;
}

float Square::field(){
    return a*a;
}

float Square::periphery(){
    return 4*a;
}
