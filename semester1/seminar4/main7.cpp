#include <stdio.h>

const int LIMIT = 1000;

int main()
{
        unsigned int num = 0;
        int i = 0;

        printf("Enter a number:\n");
        scanf("%u", &num);

        for (i = 2; i < LIMIT; i++)
                if ((num != i) && (num % i == 0))
                        break;

        if (i < LIMIT)
                printf("Num is not simple\n");
        else 
                printf("Num is simple\n");

        return 0;
}
