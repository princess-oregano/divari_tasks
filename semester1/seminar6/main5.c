#include <stdio.h>

#define ARR_SIZE 3
#define ARR_ARR_SIZE 3

int main()
{
        int i = 0;
        int k = 0;
        int j = 0;
        int arr[ARR_ARR_SIZE][ARR_SIZE] = {{1, 2, 3},
                                           {4, 5, 6},
                                           {7, 8, 9}};

        printf("Matrix:\n");
        for (i = 0; i < ARR_ARR_SIZE; i++) {
                for (j = 0; j < ARR_SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        for (i = 0; i < ARR_ARR_SIZE; i++) {
                int min_row = arr[i][0], col_ind = 0;
                for (j = 1; j < ARR_SIZE; j++) {
                        if (min_row > arr[i][j]) {
                                min_row = arr[i][j];
                                col_ind = j;
                        }
                }

                for (k = 0; k < ARR_ARR_SIZE; k++)
                        if (min_row < arr[k][col_ind])
                                break;
                
                if (k == ARR_ARR_SIZE) 
                        printf("Value of saddle point: %d\n", min_row);
        }

        return 0;
}
