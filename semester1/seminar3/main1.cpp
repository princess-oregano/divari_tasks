#include <stdio.h>

double sum(double a, double b, double *a_ptr, double *b_ptr);

int main()
{
        double a = 0;
        double b = 0;

        scanf("%lf %lf", &a, &b);

        printf("%lg%+lg = %lg\n", a, b, sum(a, b, &a, &b));

        printf("a adress: %p,\n"
               "b adress: %p.\n", &a, &b);
}

double sum(double a, double b, double *a_ptr, double *b_ptr)
{
        printf("a adress: %p,\n"
               "b adress: %p.\n", a_ptr, b_ptr);
        printf("a adress: %p,\n"
               "b adress: %p.\n", &a, &b);

        a *= 2;
        b *= 3;

        return a + b;
}

