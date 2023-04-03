#include <stdio.h>

int 
main()
{
        int diff = 0;
        int min_diff = 30000000;
        int min_val1 = 0;
        int min_val2 = 0;
        int N = 0;
        int i = 0;
        int val1 = 0;
        int val2 = 0;

        scanf("%d", &N);

        for (i = 0; i < N; i++) {
                scanf("%d %d", &val1, &val2);
                diff = val2 - val1;
                if (diff < min_diff) {
                        min_diff = diff;
                        min_val1 = val1;
                        min_val2 = val2;
                }
        }

        printf("%d %d", min_val1, min_val2);

        return 0;
}
