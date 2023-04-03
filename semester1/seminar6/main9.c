#include <stdio.h>

int main()
{
        int SIZE = 0;
        scanf("%d", &SIZE);

        int arr[SIZE][SIZE];
        int sqr = SIZE * SIZE;
        int i = 0, j = SIZE / 2, k;
        
        for (k = 1; k <= sqr; ++k) {
                arr[i][j] = k;
                i--;
                j++;
                
                if (k % SIZE == 0) { 
                        i += 2; 
                        --j; 
                } else {
                    if (j == SIZE) {
                        j -= SIZE;
                    } else if (i < 0) {
                        i += SIZE;
                    }
                }
        }
        
        for (i = 0; i < SIZE; i++) {
                for (j = 0; j < SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }
        printf("\n");
        
        return 0;
}

