#include "header.h"
/// DICKY IBROHIM
/// PROCEDURE WITH POINTER AT STRUCT

int main()
{
    fraction F1, F2;
    fraction mF, AddF;
    makeFraction(&F1, 3, 4);
    printf ("F1= ");
    printFraction(F1);
    printf ("F2= ");
    makeFraction(&F2, 1, 2);
    printFraction(F2);
    mulFraction(&mF, F1, F2);
    printf ("F1 * F2 = %d/%d\n", mF);

    printf ("F1 * F2 = " );
    printFraction(mF);
    // TAMBAH
    AddFraction(&AddF, F1, F2);

    printf ("\nF11 + F22 = %d/%d \n", AddF);

    printf ("F11 + F22 = %d/%d + %d/%d = ", F1, F2);
    printFraction(AddF);
    return 0;

}
