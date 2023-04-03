#include <stdio.h>
#include <stdbool.h>

void bubble_sort(int *arr, int arr_size);
void cocktailsort(int a[], int n);

int main()
{
        int arr[10] = {0, -1, -8, 6, 8, 7, -51, 6, 11, -5};
       
        //bubble_sort(arr, 10);
        cocktailsort(arr, 10);

        printf("Elements of the array: ");
        for (int i = 0; i < 10; i++)
                printf("%d ", arr[i]);
        printf("\n");

        return 0;
}

void bubble_sort(int *arr, int arr_size)
{
        int i = 0;
        int j = 0;
        int temp = 0;

        for (i = 0; i < arr_size - 1; i++)
                for (j = 0; j < arr_size - i - 1; j++)
                        if (arr[j] > arr[j + 1]) {
                                temp = arr[j];
                                arr[j] = arr[j+1];
                                arr[j+1] = temp;
                        }
}

void cocktailsort(int arr[], int n)
{
        bool swapped = true;
        int start = 0;
        int end = n - 1;
        int temp = 0;

        while (swapped) {
                swapped = false;

        for (int i = start; i < end; ++i) {
                if (arr[i] > arr[i + 1]) {
                        temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        swapped = true;
                }
        }

        if (!swapped)
            break;

        swapped = false;

        --end;

        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                        temp = arr[i];
                        arr[i] = arr[i+1];
                        arr[i+1] = temp;
                        swapped = true;
                }
        }

        ++start;
        }
}
