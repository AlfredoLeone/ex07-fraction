//
// Created by alfredo on 11/15/18.
//

#include "fraction.h"
#include<cstdint>
#include<iostream>
#include<numeric>
namespace edu {
    namespace vcccd {
        namespace vc {
            namespace csv13 {

                int32_t Fraction::getNumerator() const {
                    return numerator;
                }

                int32_t Fraction::getDenominator() const {
                    return denominator;
                }

                void Fraction::setNumerator(int32_t numerator) {
                    this->numerator = numerator;
                }

                void Fraction::setDenominator(int32_t denominator) {
                    this->denominator = denominator;
                }

                void Fraction::output() {

                    if (numerator == 0 && denominator == 0) {
                        std::cout << "NAN";
                    } else if (!(numerator == 0, denominator == 0)) {
                        if (numerator == 0) {
                            std::cout << "0";
                        } else {
                            int32_t gcd = _gcd(numerator, denominator);
                            std::cout << (numerator / gcd) << " / " << (denominator / gcd);
                        }
                    } else {
                                            std::cout << "INF";
                                        }
                }

                int32_t Fraction::_gcd(int32_t n, int32_t g) {
                    if ( n > g ) std::swap(n, g);
                        while (n  != 0){
                            int d = g;
                            g = g % n;
                            std::swap(n, g);
                        }
                        return g;
                    }
                        }
                    }


                }

            }







