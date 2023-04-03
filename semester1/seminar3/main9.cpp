#include <stdio.h>

int main()
{
        int ch = 0;

        for (int i = 5; i >= 0; i--) {
                for (ch = 'F'; ch >= 'A' + i; ch--)
                        printf("%c", ch);

                printf("\n");
        }

        return 0;
}

