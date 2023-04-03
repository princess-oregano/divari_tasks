#include <stdio.h>

int
main()
{
        int arr[1000] = {0};
        int n = 0;
        int i = 0;
        int reversed = 0;

        scanf("%d", &n);

        for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n / 2 + 1; i++) {
                if (i == n / 2 && n % 2 == 0)
                        break;

                if (reversed == 0) {
                        printf("%d ", arr[i]);
                        reversed = 1;
                }

                if (reversed == 1 && i < n / 2) {
                        printf("%d ", arr[n-i-1]);
                        reversed = 0;
                }

        }

        return 0;
}
