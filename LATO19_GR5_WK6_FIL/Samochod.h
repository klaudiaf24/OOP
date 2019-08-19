#pragma once

#include "PojazdLadowy.h"

class Samochod : public virtual PojazdLadowy
{
  public:
    PredkoscMaksymalna p_predkosc;

    Samochod(PredkoscMaksymalna pr) : p_predkosc(pr) {}
    virtual ~Samochod() = default;

    virtual std::string name() const
    {
        return "Samchod";
    }

    PredkoscMaksymalna predkoscMaksymalna() const
    {
        return p_predkosc;
    }
};