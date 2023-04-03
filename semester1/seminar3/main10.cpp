#include <stdio.h>

int main()
{
        int j = 0;

        for (int i = 0; i < 999999; i++) {
                int h_th = i / 100000;
                int t_th = i % 100000 /  10000;
                int th = i % 10000 / 1000;
                int h = i % 1000 / 100;
                int t = i % 100 / 10;
                int o = i % 10;
                if (h_th + t_th + th == h + t + o && h + t + o == 13) {
                        printf("%06d ", i);
                        j++;
                        if (j % 8 == 0)
                                printf("\n");
                }
        }

        printf("\n");
        
        return 0;
}

