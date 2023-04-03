#include <stdio.h>

#define ARR_SIZE 4

int main()
{
        int i = 0;
        int j = 0;
        int arr[ARR_SIZE][ARR_SIZE] = {{2, 5, 6, 3},
                                       {10, 11, 154, 0},
                                       {-54, 5, 6, 8},
                                       {89, 12, 34, -1}};
        int tmp = 0;

        printf("Initial matrix:\n");
        for (i = 0; i < ARR_SIZE; i++) {
                for (j = 0; j < ARR_SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        for (i = 0; i < ARR_SIZE; i++) {
                for (j = 0; j < i; j++) {
                        tmp = arr[i][j];
                        arr[i][j] = arr[j][i]; 
                        arr[j][i] = tmp;
                }
        }

        printf("Transponed matrix:\n");
        for (i = 0; i < ARR_SIZE; i++) {
                for (j = 0; j < ARR_SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        return 0;
}

