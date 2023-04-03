#include "complex.h"

void complex_mul(double *a, double *b, double a1, double b1, double a2, double b2)
{
        *a = a1 * a2 - b1 * b2;
        *b = (a1*b2 + b1*a2);
}

