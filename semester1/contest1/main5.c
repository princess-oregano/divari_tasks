#include <stdio.h>

int 
main()
{
        int diff[1001] = {0};
        int N = 0;
        int i = 0;
        int count = 0;
        int val1 = 0;
        int val2 = 0;
        int last_val1 = 0;
        int last_val2 = 0;
        int last_diff = 0;

        scanf("%d", &N);

        for (i = 0; i < N - 1; i++) {
                scanf("%d %d", &val1, &val2);
                diff[i] = val2 - val1;
        }

        scanf("%d %d", &last_val1, &last_val2);
        last_diff = last_val2 - last_val1;

        for (i = 0; i < N - 1; i++) {
                if (diff[i] > last_diff)
                        count++;
        }

        printf("%d", count);

        return 0;
}
