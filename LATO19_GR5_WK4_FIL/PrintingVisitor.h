#pragma once

#include "Visitor.h"
#include "ElData.h"

//klasa PrintingVisitor dziedziczaca po Visitor
class PrintingVisitor : public Visitor {

    public:
    // domyslny konstruktor klsy PrintingVisitor
        explicit PrintingVisitor() = default;

    // wirtualny domyslny destruktor klasy PrintingVisitor
        virtual ~PrintingVisitor() = default;

    // wirtualna funkcja odpowiedzialna za wypisanie obiektu typu FloatData    
        virtual void visit(FloatData* obj);

    // wirtualna funkcja odpowiedzialna za wypisanie obiektu typu IntData
        virtual void visit(IntData* obj);
};