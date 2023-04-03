#include <stdio.h>

#define ARR_SIZE 4
#define ARR_ARR_SIZE 3

int main()
{
        int i = 0;
        int j = 0;
        int max_val = 0;
        int max_line = 0;
        int min_val = 0;
        int min_line = 0;
        int arr[ARR_ARR_SIZE][ARR_SIZE] = {{2, 5, 6, 3},
                       {10, 11, 154, 0},
                       {-54, 5, 6, 8}};

        printf("Initial matrix:\n");
        for (i = 0; i < ARR_ARR_SIZE; i++) {
                for (j = 0; j < ARR_SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        for (i = 0; i < ARR_ARR_SIZE; i++) {
                for (j = 0; j < ARR_ARR_SIZE; j++) {
                        if (arr[i][j] > max_val) {
                                max_val = arr[i][j];
                                max_line = i;
                        }
                        if (arr[i][j] < min_val) {
                                min_val = arr[i][j];
                                min_line = i;
                        }
                }
        }

        for (j = 0; j < ARR_SIZE; j++) {
                int tmp = arr[max_line][j];
                arr[max_line][j] = arr[min_line][j];
                arr[min_line][j] = tmp;
        }

        printf("Changed matrix:\n");
        for (i = 0; i < ARR_ARR_SIZE; i++) {
                for (j = 0; j < ARR_SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        printf("The max value in matrix: %d\n", max_val);
        printf("The min value in matrix: %d\n", min_val);

        return 0;
}

