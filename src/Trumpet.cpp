#include "Trumpet.h"
#include "Instrument.h"

#include <iostream>
#include <string>

using namespace std;

Trumpet::Trumpet()
{
    name="unknown_trumpet";
    cout<<"Constructor for class Trumpet"<<endl;
}

Trumpet::Trumpet(string name){
    this->name=name;
    cout<<"Overloaded constructor for class Trumpet"<<endl;
}

Trumpet::~Trumpet()
{
    cout<<"Virtual destructor for class Trumpet"<<endl;
}

string Trumpet::sound(){
    return "$";
}
