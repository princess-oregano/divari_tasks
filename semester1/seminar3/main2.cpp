#include <stdio.h>

void swap_values(double *a, double *b);

int main()
{
        double a = 0;
        double b = 0;

        printf("Enter two numbers:\n");
        scanf("%lf %lf", &a, &b);

        swap_values(&a, &b);

        printf("A value: %lf\n"
               "B value: %lf.\n", a, b);

        return 0;
}

void swap_values(double *a, double *b)
{
        double temp_a = *a;
        double temp_b = *b;

        *a = temp_a + temp_b;
        *b = temp_a - temp_b;
}

