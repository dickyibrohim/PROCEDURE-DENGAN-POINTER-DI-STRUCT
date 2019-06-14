#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
/// LIBRARY
#include <stdio.h>
#include <stdlib.h>
/// STRUCT
typedef struct
{
    int numerator; /// PEMBILANG
    int denominator; /// PENYEBUT
}fraction; /// PECAHAN

/// ADT
/// CONSTRACTOR
void makeFraction (fraction *F, int num, int denom);
void printFraction (fraction F);
void mulFraction(fraction *Result, fraction F1, fraction F2);
void AddFraction(fraction *Result1, fraction F11, fraction F22);

#endif // HEADER_H_INCLUDED
