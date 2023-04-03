#include <stdio.h>

int main()
{
        int ch = 0;

        printf("Enter a character:\n");
        ch = getchar();

        if             ((ch < '0') || (ch > '9' && ch < 'A') ||
            (ch > 'Z' && ch < 'a') || (ch > 'z'))
                        printf("'%c'(%d) is a symbol\n", ch, ch);
        else if (ch >= '0' && ch <= '9')
                printf("'%c'(%d) is a number\n", ch, ch);
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
                printf("'%c'(%d) is a letter\n", ch, ch);

        return 0;
}

