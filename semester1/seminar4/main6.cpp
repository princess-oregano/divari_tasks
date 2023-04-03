#include <stdio.h>
#include "complex.h"

enum opt_t {
        SUM = 1,
        SUB = 2, 
        MUL = 3,
        DIV = 4,
};

int main()
{
        double a = 0;
        double b = 0;
        double a1 = 0;
        double b1 = 0;
        double a2 = 0;
        double b2 = 0;
        int opt = SUM;

        printf("Enter the coefficients for the first equation:\n");
        scanf("%lf %lf", &a1, &b1);
        printf("Enter the coefficients for the second equation:\n");
        scanf("%lf %lf", &a2, &b2);
       
        printf("Choose an option:\n");
        printf("1) add        2) substract\n"
               "3) multiply   4) divide\n");
        scanf("%d", &opt);

        switch (opt) {
                case SUM:
                        printf("Sum:\n");
                        complex_sum(&a, &b, &a1, &b1, &a2, &b2);
                        printf("%lg%+lgi\n", a, b);
                        break;
                case SUB:
                        printf("Sub:\n");
                        complex_sub(&a, &b, &a1, &b1, &a2, &b2);
                        printf("%lg%+lgi\n", a, b);
                        break;
                case MUL:
                        printf("Mul:\n");
                        complex_mul(&a, &b, a1, b1, a2, b2);
                        printf("%lg%+lgi\n", a, b);
                        break;
                case DIV:
                        printf("Div:\n");
                        complex_div(&a, &b, a1, b1, a2, b2);
                        printf("%lg%+lgi\n", a, b);
                        break;
                default:
                        printf("Invalid operation.\n");
        }

        return 0;
}

