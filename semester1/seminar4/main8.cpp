#include <stdio.h>

int main()
{
        unsigned int num = 0;
        unsigned int i = 0;

        printf("Enter a number:\n");
        scanf("%u", &num);

        printf("%u = 1 ", num);
        for (i = 2; num != 1;) {
                if (num % i == 0) {
                       printf("* %u ", i);
                       num /= i;
                } else {
                        i++;
                }
        }

        printf("\b\b\b");
        printf("\n");

        return 0;
}
