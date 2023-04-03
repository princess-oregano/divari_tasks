#include <stdio.h>

float func(float x);

int main()
{
        float x = 0;

        printf("Enter x:\n");
        scanf("%f", &x);

        printf("The result: %lg\n", func(x));

        return 0;
}

float func(float x)
{
        return (x > 0) ? 5*x : 6*x;
}
