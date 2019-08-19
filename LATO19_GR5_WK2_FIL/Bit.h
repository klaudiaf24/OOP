#ifndef __BIT__
#define __BIT__

class Bit
{
public:
    //Deklaracja przyjazni z klasa BitArray
    friend class BitArray;

    //Konstruktor klasy Bit
    Bit(int poz, unsigned char *znak);

    //Operator przypisania
    void operator=(bool wzor);

    //Operator rzutujacy na typ wbudowany bool
    operator bool() const;

private:
    //Pozycja w bajcie
    int m_pozycja;

    //Znak bitu
    unsigned char *m_znak;
};

Bit::Bit(int poz, unsigned char *znak) : m_pozycja(poz), m_znak(znak) {}

void Bit::operator=(bool wzor)
{
    if (wzor == true)
        *m_znak |= (1 << m_pozycja);
    else
        *m_znak &= ~(1 << m_pozycja);
}

Bit::operator bool() const
{
    return (*m_znak & (1 << m_pozycja)) != 0;
}

#endif
