#include <stdio.h>

void sort_array(int *arr, int size);

int main()
{
        int arr[10] = {0, -1, -8, 6, 8, 7, -51, 6, 11, -5};
        
        sort_array(arr, 10);

        printf("Element of the array: ");
        for (int i = 0; i < 10; i++)
                printf("%d ", arr[i]);
        printf("\n");

        return 0;
}

void sort_array(int *arr, int size)
{
        int i = 0;
        int j = 0;
        int temp = 0;

        for (j = 0; j < size; j++) {
                for (i = 1; i < size; i++)
                        if (arr[i - 1] >= 0 && arr[i] < 0) {
                                temp = arr[i - 1];
                                arr[i - 1] = arr[i];
                                arr[i] = temp;
                        }
        }
}

