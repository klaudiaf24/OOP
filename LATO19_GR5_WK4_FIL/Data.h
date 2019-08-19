#pragma once


// klasa bazowa po ktorej dziedzicza klasy IntData i FloatData
class Data{

    public:
    // domyslny konstruktor klasy Data
        explicit Data() = default;

    // domyslny destruktor klasy Data
        virtual ~Data() = default;
};