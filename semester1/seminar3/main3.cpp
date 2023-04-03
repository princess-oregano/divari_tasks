#include <stdio.h>
#include "complex.h"

int main()
{
        double a = 0;
        double b = 0;
        double a1 = 0;
        double b1 = 0;
        double a2 = 0;
        double b2 = 0;

        printf("Enter the coefficients for the first equation:\n");
        scanf("%lf %lf", &a1, &b1);
        printf("Enter the coefficients for the second equation:\n");
        scanf("%lf %lf", &a2, &b2);
        
        printf("Sum:\n");
        complex_sum(&a, &b, a1, b1, a2, b2);
        printf("%lg%+lgi\n", a, b);

        printf("Sub:\n");
        complex_sub(&a, &b, a1, b1, a2, b2);
        printf("%lg%+lgi\n", a, b);
        
        printf("Mul:\n");
        complex_mul(&a, &b, a1, b1, a2, b2);
        printf("%lg%+lgi\n", a, b);
        
        printf("Div:\n");
        complex_div(&a, &b, a1, b1, a2, b2);
        printf("%lg%+lgi\n", a, b);

        return 0;
}

