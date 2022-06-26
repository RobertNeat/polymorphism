#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <iostream>
#include <string>

using namespace std;

class Instrument
{
    protected:
        string name;
    public:
        Instrument();
        Instrument(string name);

        virtual ~Instrument();
        virtual string sound();
        void music(int n);
};

#endif // INSTRUMENT_H
