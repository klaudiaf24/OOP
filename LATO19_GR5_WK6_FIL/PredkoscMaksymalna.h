#pragma once
#include <iostream>

class PredkoscMaksymalna
{
private:
  int p_predkosc;

public:
  PredkoscMaksymalna(int val) : p_predkosc(val) {}
  virtual ~PredkoscMaksymalna() = default;
  friend std::ostream &operator<<(std::ostream &out, const PredkoscMaksymalna &pr);
};

std::ostream &operator<<(std::ostream &out, const PredkoscMaksymalna &pr)
{
  return (out << pr.p_predkosc << "km/h");
}