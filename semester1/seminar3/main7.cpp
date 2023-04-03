#include <stdio.h>
#include <math.h>

int main()
{
        int val = 0;
        int num = 0;

        for (int i = 0; i < 6; i++) {
                num = num * 10 + i;
                val = 9 * num + (i + 1);
                printf("%d\n", val);
        }

        return 0;
}

