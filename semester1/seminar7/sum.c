#include "complex.h"

complex_t complex_sum(complex_t cmp1, complex_t cmp2)
{
        complex_t sol = {};

        sol.a = cmp1.a + cmp2.a;
        sol.b = cmp1.b + cmp2.b;

        return sol;
}

