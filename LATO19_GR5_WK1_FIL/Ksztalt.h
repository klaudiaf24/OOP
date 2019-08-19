#ifndef __KSZTALT__
#define __KSZTALT__

#include <iostream>

class Ksztalt
{

public:
    virtual ~Ksztalt(){};

    virtual void wypisz(std::ostream &k) const = 0;
    virtual double polePow() const = 0;

    static void wypisz(const Ksztalt &k)
    {
        k.wypisz(std::cout);
    };
};

#endif