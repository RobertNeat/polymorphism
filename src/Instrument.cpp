#include "Instrument.h"

#include <iostream>
#include <string>

using namespace std;

Instrument::Instrument()
{
    name="unknown";
    cout<<"Constructor for class Instrument"<<endl;
}

Instrument::Instrument(string name){
    this->name=name;
    cout<<"Overloaded constructor for class Instrument"<<endl;
}

Instrument::~Instrument()
{
    cout<<"Virtual destructor for class Instrument"<<endl;
}

string Instrument::sound(){
    return "@";
}

void Instrument::music(int n){
    cout<<"Plays instrument: "<<name<<endl;
    for(int a=0;a<n;a++){
        cout<<sound();
    }
    cout<<endl;
}
