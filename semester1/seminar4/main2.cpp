#include <stdio.h>

int main()
{
        float x = 0;
        float y = 0;

        printf("Enter coordinates (x,y):\n");

        printf("x = ");
        scanf("%f", &x);

        printf("y = ");
        scanf("%f", &y);

        int quat = 0;
        if (x > 0) {
                if (y > 0) 
                        quat = 1;
                else 
                        quat = 4;
        } else {
                if (y > 0)
                        quat = 2;
                else 
                        quat = 3;
        }

        printf("Point is in the %d quaternion.\n", quat);

        return 0;
}

