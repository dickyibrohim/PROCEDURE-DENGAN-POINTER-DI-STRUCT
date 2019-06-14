#include "header.h"
void makeFraction (fraction *F, int num, int denom) /// *F that mean using POINTER
{
    F-> numerator = num;
    F -> denominator = denom;
    /// -> arrow for pointer
    /// Command way F.numerator
}

void printFraction (fraction F)
{
    printf ("%d/%d\n", F.numerator, F.denominator); // Pakai TITIK Karena bukan Pointer
}

void mulFraction(fraction *Result, fraction F1, fraction F2)
{
    Result->numerator= F1.numerator * F2.numerator;
    Result->denominator= F1.denominator * F2.denominator;
}



void AddFraction(fraction *Result1, fraction F11, fraction F22)

{
    Result1->numerator= F11.numerator + F22.numerator;
    Result1->denominator= F11.denominator * F22.denominator;
}

