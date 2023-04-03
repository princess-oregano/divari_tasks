#include <stdio.h>

int main()
{
        int size = 0;
        scanf("%d", &size); 

        int arr[size][size];
        for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                        scanf("%d", &arr[i][j]);

        printf("Initial matrix:\n");
        for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        int div = 0;
        int blk = size / 2;
        int tmp[blk][blk];
        if (size % 2 == 0)
                div = blk;
        else 
                div = blk + 1;

        for (int i = 0; i < blk; i++)
                for (int j = 0; j < blk; j++)
                        tmp[i][j] = arr[i][j];
       
        for (int i = 0; i < blk; i++)
                for (int j = 0; j < blk; j++)
                        arr[i][j] = arr[i+div][j];
        
        for (int i = 0; i < blk; i++)
                for (int j = 0; j < blk; j++)
                        arr[i+div][j] = arr[i+div][j+div];
        
        for (int i = 0; i < blk; i++)
                for (int j = 0; j < blk; j++)
                        arr[i+div][j+div] = arr[i][j+div];
        
        for (int i = 0; i < blk; i++)
                for (int j = 0; j < blk; j++)
                        arr[i][j+div] = tmp[i][j];
        
        printf("Changed matrix:\n");
        for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        return 0;
}

