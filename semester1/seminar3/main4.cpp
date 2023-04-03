#include <stdio.h>
#include <math.h>

int main()
{
        double x = 0;
        double y = 0;
        double a = 0;
        double b = 0;
        double z = 0;
        double h = 0;
        double h1 = 0;

        printf("enter [a, b] interval for x:\n");
        scanf("%lf %lf", &a, &b);

        printf("enter z for y:\n");
        scanf("%lf", &z);

        printf("Enter h and h1:\n");
        scanf("%lf %lf", &h, &h1);

        for (x = a, y = z; x < b; x += h, y += h1) {
                printf("x = %lg, y = %lg, sin(x+y) = %lg\n", x, y, sin(x+y));
        }

        return 0;
}

