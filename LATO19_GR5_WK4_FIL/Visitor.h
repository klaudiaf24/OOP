#pragma once

class FloatData;
class IntData;

//Klasa bazowa, abstarkcyjna po ktorej dziedzicza klasy PrintingVisitor i AccumulatingVisitor
class Visitor{

    public:
    // domyslny konstruktor klsy Visitor
        explicit Visitor() = default ;

    // wirtualny domyslny destruktor klasy Visitor
        virtual ~Visitor() = default;
    
    //czysto wirtualna funkcja odpowiedzialna za wypisanie obiektu typu FloatData
        virtual void visit(FloatData* obj) = 0;

    //czysto wirtualna funkcja odpowiedzialna za wypisanie obiektu typu IntData
        virtual void visit(IntData* obj) = 0;
        
};