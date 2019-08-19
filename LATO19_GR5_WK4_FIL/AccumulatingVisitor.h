#pragma once

#include "Visitor.h"
#include "ElData.h"


//klasa AccumulatingVisitor dziedziczaca po Visitor
class AccumulatingVisitor : public Visitor {

    private:
    // zmienna typu float przechowujaca sume z klas pochodnych po Visitor
        float _suma;



    public:
    // konstruktor klsy AccumulatingVisitor
        explicit AccumulatingVisitor() : _suma(0.) {}

    // wirtualny destruktor klasy AccumulatingVisitor
        virtual ~AccumulatingVisitor() {};

    // wirtualna funkcja odpowiedzialna za wypisanie obiektu typu FloatData    
        virtual void visit(FloatData* obj);
    
    // wirtualna funkcja odpowiedzialna za wypisanie obiektu typu IntData
        virtual void visit(IntData* obj);

    // funkcja zwracajaca _suma
        float getTotalSum();
};