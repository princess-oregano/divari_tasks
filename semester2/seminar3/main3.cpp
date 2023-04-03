#include <stdio.h>
#include <string.h>

int val(char c)
{
        if (c >= '0' && c <= '9')
                return (int)c - '0';
        else
                return (int)c - 'A' + 10;
}

int toDeci(char *str, int base)
{
        int len = strlen(str);
        int power = 1; // Initialize power of base
        int num = 0;  // Initialize result
        int i;
        for (i = len - 1; i >= 0; i--) {
                if (val(str[i]) >= base) {
                        printf("Invalid Number");
                        return -1;
                }

                num += val(str[i]) * power;
                power = power * base;
        }

        return num;
}

int main()
{
        char str[300];
        scanf("%s", str);
        int base = 3;
        printf("%d\n", toDeci(str, base));
        return 0;
}
