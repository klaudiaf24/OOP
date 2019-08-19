#include "AccumulatingVisitor.h"
#include <iostream>

void AccumulatingVisitor::visit(FloatData* obj){
    _suma += static_cast<float>( obj->getFloat() );
}


void AccumulatingVisitor::visit(IntData* obj){
    _suma += obj->get();
}

float AccumulatingVisitor::getTotalSum() { 
    return _suma;
}
