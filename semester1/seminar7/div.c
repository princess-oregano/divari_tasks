#include "complex.h"

void complex_div(complex_t *sol, complex_t cmp1, complex_t cmp2)
{
        sol->a = (cmp1.a*cmp2.a + cmp1.b*cmp2.b) / (cmp2.a*cmp2.a + cmp2.b*cmp2.b);
        sol->b = (cmp1.b*cmp2.a - cmp1.a*cmp2.b) / (cmp2.a*cmp2.a + cmp2.b*cmp2.b);
}

