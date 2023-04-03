#include <stdio.h>

#define SIZE 9

int main()
{
        int M = 0;
        int arr[SIZE][SIZE];
        for (int i = 0; i < SIZE; i++)
                for (int j = 0; j < SIZE; j++)
                        arr[i][j] = 1;

        printf("Initial matrix:\n");
        for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        scanf("%d", &M);

        for (int i = 0; i < M; i++)
                for (int j = 0; j < i + 2; j++)
                        arr[i][j] = 0;

        printf("Changed matrix:\n");
        for (int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        printf("%3d ", arr[i][j]);
                }
                printf("\n");
        }

        return 0;
}
