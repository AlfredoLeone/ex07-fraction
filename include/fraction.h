//
// Created by alfredo on 11/15/18.
//

#ifndef EX07_FRACTION_FRACTION_H
#define EX07_FRACTION_FRACTION_H

#include <cstdint>
#include <iostream>
#include <math.h>


namespace edu { namespace vcccd { namespace vc { namespace csv13 {

class Fraction{
public:
    Fraction(int numerator, int denominator){
        this-> numerator = numerator;
        this->  denominator =denominator;
    }

public:
    int32_t getNumerator() const;
    int32_t getDenominator() const;
    double getRealValue() const;

    void setNumerator(int32_t numerator);
    void setDenominator(int32_t denominator);

    void output();

private:
    int32_t _gcd(int32_t n, int32_t d);
    int32_t numerator;
    int32_t denominator;

};
            }}}}
#endif //EX07_FRACTION_FRACTION_H
