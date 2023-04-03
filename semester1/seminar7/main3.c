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
        complex_t complex1 = {};
        complex_t complex2 = {};
        complex_t sol = {};
        int opt = SUM;

        printf("Enter the coefficients for the first equation:\n");
        scanf("%lf %lf", &complex1.a, &complex1.b);
        printf("Enter the coefficients for the second equation:\n");
        scanf("%lf %lf", &complex2.a, &complex2.b);
       
        printf("Choose an option:\n");
        printf("1) add        2) substract\n"
               "3) multiply   4) divide\n");
        scanf("%d", &opt);

        switch (opt) {
                case SUM:
                        printf("Sum:\n");
                        sol = complex_sum(complex1, complex2);
                        printf("%lg%+lgi\n", sol.a, sol.b);
                        break;
                case SUB:
                        printf("Sub:\n");
                        sol = complex_sub(complex1, complex2);
                        printf("%lg%+lgi\n", sol.a, sol.b);
                        break;
                case MUL:
                        printf("Mul:\n");
                        complex_mul(&sol, complex1, complex2);
                        printf("%lg%+lgi\n", sol.a, sol.b);
                        break;
                case DIV:
                        printf("Div:\n");
                        complex_mul(&sol, complex1, complex2);
                        printf("%lg%+lgi\n", sol.a, sol.b);
                        break;
                default:
                        printf("Invalid operation.\n");
        }

        return 0;
}

