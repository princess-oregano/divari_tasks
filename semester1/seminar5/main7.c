#include <stdio.h>
#include <stdbool.h>

int ordered_test(int *arr, int n);

int main()
{
        int arr[6] = {1, 2, 3, 4, 9, 6};

        printf("Elements of the array: ");
        for (int i = 0; i < 6; i++)
                printf("%d ", arr[i]);
        printf("\n");

        printf("Order coefficient: %d\n", ordered_test(arr, 6));

        return 0;
}

int ordered_test(int *arr, int n)
{
        int i = 0;
        int p = 1;
        bool ordered = true; 

        for (i = 0; i < n - 1; i++) {
                if (arr[i] < arr[i + 1] && ordered) {
                        p *= (arr[i + 1] - arr[i]);
                } else {
                        ordered = false;
                        break;
                }
        }

        if (!ordered) {
                p = 0;
                for (i = 0; i < n - 1; i++) {
                        if (arr[i] > arr[i + 1]) {
                                p++;
                        }
                }
        }

        return p;
}

