#pragma once

#include <iostream>
#include "PredkoscMaksymalna.h"

class Pojazd
{
  public:
    Pojazd() = default;
    virtual ~Pojazd() = default;
    virtual std::string name() const = 0;
    friend std::ostream &operator<<(std::ostream &out, const Pojazd &p);
};

std::ostream &operator<<(std::ostream &out, const Pojazd &p)
{
    return out << p.name();
}