#ifndef ELData_h
#define ELData_h

#include "Visitor.h"
#include "Data.h"


// klasa IntData dziedziczaca po klasie Data
class IntData : public Data {

    public:
    // konstruktor klsy IntData
        IntData(int d) : m_d(d) { }

    // funkcja zmieniajaca pierwotna wartosc m_d
        void operator<<(int d){ 
            m_d = d; 
        }

    // funkcja zwracajaca wartosc m_d
        int get() const{ 
            return m_d;
        }

    // funkcja wywolujaca funkcje visit z klasy Visitor przekazujac wskaznik na obiek klasy IntData
        void acceptVisitor(Visitor& v){ 
            v.visit(this); 
        }



    private:
    // zmienna typu int przechowujaca zadana przy wywolywaniu konstruktora wartosc
        int m_d;
};




// klasa FloatData dziedziczaca po klasie Data
class FloatData : public Data {

    public:
    //konstruktor klsy FloatData
        FloatData(float d) : m_d(d){ }

    // funkcja zmieniajaca pierwotna wartosc m_d
        void operator<<(float d){ 
            m_d = d; 
        }

    // funkcja zwracajaca wartosc m_d
        float getFloat() const{ 
            return m_d; 
        }

    // funkcja wywolujaca funkcje visit z klasy Visitor przekazujac wskaznik na obiek klasy FloatData
        void acceptVisitor(Visitor& v){ 
            v.visit(this);
        }


    private:
    // zmienna typu float przechowujaca zadana przy wywolywaniu konstruktora wartosc
        float m_d; 

};

#endif
