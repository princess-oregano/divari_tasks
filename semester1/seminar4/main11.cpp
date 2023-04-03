#include <stdio.h>

int main()
{
        unsigned int num = 0;
        unsigned int i1 = 0;
        unsigned int i2 = 0;
        unsigned int i3 = 0;
        unsigned int i4 = 0;
        
        scanf("%u", &num);

        for (i1 = 0; i1 < num; i1++)
                for (i2 = 0; i2 < num; i2++)
                        for (i3 = 0; i3 < num; i3++)
                                for (i4 = 0; i4 < num; i4++)
                                        if (i1*i1+ i2*i2 + i3*i3 + i4*i4 == num) {
                                                printf("%u = %u^2 + %u^2 + %u^2 + %u^2\n", num, i1, i2, i3, i4);
                                                return 0;
                                        }

        return 0;
}

