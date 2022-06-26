#include "Violin.h"
#include "Instrument.h"

#include <iostream>
#include <string>

using namespace std;

Violin::Violin()
{
    name="unknown_violin";
    cout<<"Constructor for class Violin"<<endl;
}

Violin::Violin(string name){
    this->name=name;
    cout<<"Overloaded constructor for class Violin"<<endl;
}

Violin::~Violin()
{
    cout<<"Virtual destructor fo class Violin"<<endl;
}

string Violin::sound(){
    return "%";
}
