#include "PrintingVisitor.h"
#include <iostream>

void PrintingVisitor::visit(FloatData* obj){
    std::cout << " " << obj->getFloat();
}


void PrintingVisitor::visit(IntData* obj){
    std::cout << " " << obj->get();
}