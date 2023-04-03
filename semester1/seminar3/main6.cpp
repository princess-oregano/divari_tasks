#include <stdio.h>
#include <math.h>

int main()
{
        float EPSILON = 0;

        float a = 0;
        float b = 0;
        float c = 0;

        float x1_a = 0;
        float x1_b = 0;
        float x2_a = 0;
        float x2_b = 0;

        float x1 = 0;
        float x2 = 0;

        printf("Enter EPSILON:\n");
        scanf("%f", &EPSILON);
        printf("Enter coefficients:\n");
        scanf("%f %f %f", &a, &b, &c);
        printf("Enter first interval:\n");
        scanf("%f %f", &x1_a, &x1_b);
        printf("Enter second interval:\n");
        scanf("%f %f", &x2_a, &x2_b);
        
        while (fabs(x1_a - x1_b) > EPSILON) {
                x1 = (x1_a + x1_b) / 2;
                if ((a*x1_a*x1_a + b*x1_a + c) * (a*x1*x1 + b*x1 + c) < 0)
                        x1_b = x1;
                else 
                        x1_a = x1;
        }

        while (fabs(x2_a - x2_b) > EPSILON) {
                x2 = (x2_a + x2_b) / 2;
                if ((a*x2_a*x2_a + b*x2_a + c) * (a*x2*x2 + b*x2 + c) < 0)
                        x2_b = x2;
                else 
                        x2_a = x2;
        }

        printf("Solutions of the equation: %f %f\n", x1, x2);
        return 0;
}

