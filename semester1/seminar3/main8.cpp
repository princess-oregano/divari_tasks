#include <stdio.h>

int main()
{
        double val = 0;
        int num = 0;
        double sum = 0;

        while (scanf("%lf", &val) == 1) {
                if (val >= 0) {
                        num++;
                        sum += val;
                }
        }

        printf("Number of positive values: %d\n", num);
        printf("Sum of positive values: %lg\n", sum);

        return 0;
}

