#include <stdio.h>

int function(int n, int *a) 
{
        int x = -1;
        for(int i = 1; i < n; i++) {
                        if(a[i] > x)
                                x = a[i];

                        x += 2;
                }
        return x;
}

int
main()
{
        int n = 9;
        int a = 8;

        printf("%o", ~057);

        return 0;
}

