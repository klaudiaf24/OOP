#pragma once

class Motorowka : public virtual Pojazd
{
  public:
    PredkoscMaksymalna p_predkosc;

    Motorowka(PredkoscMaksymalna pr) : p_predkosc(pr) {}

    virtual std::string name() const
    {
        return "Motorowka";
    }

    PredkoscMaksymalna predkoscMaksymalna() const
    {
        return p_predkosc;
    }
};