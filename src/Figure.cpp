#include "Figure.h"
#include <iostream>

using namespace std;

Figure::Figure()
{
    name="empty_figure_name";
    cout<<"Constructor for Figure class"<<endl;
}

Figure::Figure(string name)
{
    this->name=name;
    cout<<"Overloaded constructor for Figure class"<<endl;
}

Figure::~Figure()
{
    cout<<"Virtual destructor for Figure class"<<endl;
}

void Figure::info(){
    cout<<"Figure name: "<<name<<endl;
}

void Figure::draw(){
    cout<<"Draws figure: "<<name<<endl;
}

float Figure::field(){
    return 0;
}

float Figure::periphery(){
    return 0;
}

void Figure::display(){
    info();
    draw();
    cout<<"Field: "<<field()<<endl;
    cout<<"Periphery: "<<periphery()<<endl;
}
