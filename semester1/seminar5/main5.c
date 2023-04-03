#include <stdio.h>
#include <stdbool.h>

void insertion_sort(int *arr, int arr_size);
void shell_sort(int a[], int n);

int main()
{
        int arr[10] = {0, -1, -8, 6, 8, 7, -51, 6, 11, -5};
       
        shell_sort(arr, 10);
        //insertion_sort(arr, 10);

        printf("Elements of the array: ");
        for (int i = 0; i < 10; i++)
                printf("%d ", arr[i]);
        printf("\n");

        return 0;
}

void insertion_sort(int *arr, int n)
{
        int i = 0;
        int key = 0;
        int j = 0;

        for (i = 1; i < n; i++) {
                key = arr[i];
                j = i - 1;
  
                while (j >= 0 && arr[j] > key) {
                        arr[j + 1] = arr[j];
                        j = j - 1;
                }

                arr[j + 1] = key;
        }
}

void shell_sort(int arr[], int n)
{
    int i = 0;
    int j = 0;
    int k = 0; 
    int temp = 0;

    for (i = n / 2; i > 0; i = i / 2) {
        for (j = i; j < n; j++) {
            for(k = j - i; k >= 0; k = k - i) {
                if (arr[k+i] >= arr[k]) {
                    break;
                } else {
                    temp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = temp;
                }
            }
        }
    }
}

