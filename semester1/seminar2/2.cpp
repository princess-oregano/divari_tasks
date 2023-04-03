#include <stdio.h>
#include <math.h>

int main()
{
        const double PI = 3.142857;

        double func_value = 0;
        double x_value = 0;

        scanf("%lf", &x_value);

        func_value = sqrt((pow(sin(x_value), 2) + cos(pow(x_value, 5))) / (sqrt(PI + tan(pow(x_value + 5, 3) / x_value))));

        printf("%.6lf\n", func_value);

        return 0;
}

