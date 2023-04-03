#include <stdio.h>

int main()
{
        unsigned int num1 = 0;
        unsigned int num2 = 0;
        unsigned int i = 0;

        printf("Enter the first number:\n");
        scanf("%u", &num1);

        printf("Enter the second number:\n");
        scanf("%u", &num2);

        for (i = 2; i <= num1 && i <= num2; i++) {
                if ((num1 % i == 0) && (num2 % i == 0)) {
                        printf("NOD: %u\n", i);
                        break;
                }
        }

        return 0;
}

