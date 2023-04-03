#include <stdio.h>

void selection_sort(int *arr, int n);
void square_selection_sort(int *arr, int n);

int main()
{
        int arr[10] = {0, -1, -8, 6, 8, 7, -51, 6, 11, -5};

        selection_sort(arr, 10);

        printf("Elements of the array: ");
        for (int i = 0; i < 10; i++)
                printf("%d ", arr[i]);
        printf("\n");

        return 0;
}

void selection_sort(int *arr, int n)
{
        int i = 0;
        int j = 0; 
        int min_idx = 0;
        int temp = 0;
  
        for (i = 0; i < n-1; i++) {
                min_idx = i;
                for (j = i+1; j < n; j++)
                        if (arr[j] < arr[min_idx])
                                min_idx = j;
 
                temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
        }
}

