#include <stdio.h>
#include <math.h>

float my_sin(float x, float EPSILON);

int main()
{
        float EPSILON = 0;
        double val = 0;

        printf("Enter EPSILON:\n");
        scanf("%f", &EPSILON);
        printf("Enter value:\n");
        while (scanf("%lf", &val) != 0) {
                printf("sin(%lg) = %lg\n", val, my_sin(val, EPSILON));
                printf("Enter value:\n");
        }

        return 0;
}

float my_sin(float x, float EPSILON)
{
        float res = 0;
        float pow = x;
        float fact = 1;
        
        for (int i = 0; fabs(pow/fact) > EPSILON; i++) {
                res += pow/fact;
                pow *= -1*x*x;
                fact *= (2*(i+1)) * (2*(i+1) + 1);
        }

        return res;
}
