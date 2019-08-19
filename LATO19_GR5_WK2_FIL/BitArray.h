#ifndef __BITARRAY__
#define __BITARRAY__

#include "Bit.h"
#include <iostream>
#include <cstring>

class BitArray
{

public:
    //Konstruktor klasy BitArray
    BitArray(const int ilosc, const bool tof = false);

    //Destruktor klasy BitArray
    ~BitArray();

    //Funkcja wypisywujaca BitArray
    void print() const;

    //Funkcja zwracajaca Bit na zadanej pozycji
    Bit operator[](int pozycja) const;

private:
    //Rozmiar wszytskich bitow
    int m_rozmiar;

    //Tablica przechowujaca bajty
    unsigned char *m_tab;
};

BitArray::BitArray(const int ilosc, const bool tof) : m_rozmiar(ilosc)
{
    int temp;
    if ((ilosc % 8) == 0)
        temp = (ilosc / 8);
    else
        temp = (ilosc / 8) + 1;

    m_tab = new unsigned char[temp];

    for (int i = 0; i < m_rozmiar; i++)
        (*this)[i] = static_cast<unsigned char>(tof);
}

BitArray::~BitArray()
{
    delete[] m_tab;
}

Bit BitArray::operator[](int pozycja) const
{
    int poz = pozycja % 8;
    int zmienna = pozycja / 8;
    return Bit(poz, m_tab + zmienna);
}

void BitArray::print() const
{
    for (int i = m_rozmiar - 1; i >= 0; i--)
    {
        std::cout << (*this)[i];
        if ((i % 8) == 0)
            std::cout << " <-" << i << " ";
    }
}

#endif