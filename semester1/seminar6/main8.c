#include <stdio.h>

#define MTX1_LINE 3
#define MTX1_COL 2
#define MTX2_LINE MTX1_COL
#define MTX2_COL 2

#define MTX3_LINE MTX1_LINE
#define MTX3_COL MTX2_COL

int main()
{
        int i = 0;
        int j = 0;

        int mtx1[MTX1_LINE][MTX1_COL] = {{1, 1},
                                         {2, 2},
                                         {3, 3}};
        
        int mtx2[MTX2_LINE][MTX2_COL] = {{1, 1},
                                         {1, 1}};

        int mtx3[MTX3_LINE][MTX3_COL] = {};


        for (i = 0; i < MTX1_LINE; i++) {
                for (j = 0; j < MTX2_COL; j++) {
                        mtx3[i][j] = 0;
                        for (int k = 0; k < MTX2_COL; k++)
                                mtx3[i][j] += mtx1[i][j] * mtx2[j][i];
                }
        }

        for (i = 0; i < MTX3_LINE; i++) {
                for (j = 0; j < MTX3_COL; j++) {
                        printf("%d ", mtx3[i][j]);
                }
                printf("\n");
        }

        return 0;
}

