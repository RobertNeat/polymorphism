#ifndef VIOLIN_H
#define VIOLIN_H

#include "Instrument.h"
#include <iostream>
#include <string>

using namespace std;

class Violin: public Instrument
{
    public:
        Violin();
        Violin(string name);
        virtual ~Violin();
        string sound();
};

#endif // VIOLIN_H
