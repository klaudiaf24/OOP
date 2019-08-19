#pragma once

#include "Samochod.h"
#include "Motorowka.h"

class Amfibia : public Samochod, public Motorowka
{
  public:
    Amfibia(PredkoscMaksymalna s, PredkoscMaksymalna m) : Samochod(s), Motorowka(m) {}
    ~Amfibia() = default;

    virtual std::string name() const
    {
        return "Amfibia";
    }
    PredkoscMaksymalna predkoscMaksymalna_Lad()
    {
        return Samochod::p_predkosc;
    }

    PredkoscMaksymalna predkoscMaksymalna_Woda()
    {
        return Motorowka::p_predkosc;
    }
};