#ifndef __KWADRAT__
#define __KWADRAT__

#include "Ksztalt.h"

class Kwadrat : public Ksztalt
{

private:
    float _bok;

public:
    Kwadrat(float a = 1) : _bok(a) {}
    void wypisz(std::ostream &k) const;
    double polePow() const;

    // virtual void wypisz(std::ostream &k) const = 0;
    // virtual double polePow() const = 0;
};

void Kwadrat::wypisz(std::ostream &k) const
{
    k << "Kwadrat o boku: " << _bok << std::endl;
}

double Kwadrat::polePow() const
{
    return _bok * _bok;
}

#endif