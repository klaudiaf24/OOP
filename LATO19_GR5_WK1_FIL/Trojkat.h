#ifndef __TROJKAT__
#define __TROJKAT__

#include "Ksztalt.h"
#include "math.h"

class Trojkat : public Ksztalt
{

private:
    double _a;
    double _b;
    double _c;

public:
    Trojkat(double b1 = 1, double b2 = 1, double b3 = 1)
        : _a(b1), _b(b2), _c(b3)
    {
    }
    void wypisz(std::ostream &k) const;
    double polePow() const;
};

void Trojkat::wypisz(std::ostream &k) const
{
    k << "Trojkat o bokach: " << _a << " " << _b << " " << _c << std::endl;
}

double Trojkat::polePow() const
{
    double x = (_a + _b + _c) / 2;
    return sqrt(x * (x - _a) * (x - _b) * (x - _c));
}

#endif