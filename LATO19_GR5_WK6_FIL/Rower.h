#pragma once

#include "PojazdLadowy.h"

class Rower : public virtual PojazdLadowy
{
  public:
    Rower() {}
    virtual std::string name() const
    {
        return "Rower";
    }
};