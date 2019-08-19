#ifndef __KOLO__
#define __KOLO__

#include "Ksztalt.h"

class Kolo : public Ksztalt
{

private:
    float _promien;

public:
    Kolo(float r = 1) : _promien(r) {}
    void wypisz(std::ostream &k) const;
    double polePow() const;
};

void Kolo::wypisz(std::ostream &k) const
{

    k << "Kolo o promieniu: " << _promien << std::endl;
}

double Kolo::polePow() const
{

    double PI = 3.1415;
    return _promien * _promien * PI;
}

#endif