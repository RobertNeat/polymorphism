#ifndef TRUMPET_H
#define TRUMPET_H

#include "Instrument.h"
#include <iostream>
#include <string>

using namespace std;

class Trumpet:public Instrument
{
    public:
        Trumpet();
        Trumpet(string name);
        virtual ~Trumpet();
        string sound();
};

#endif // TRUMPET_H
