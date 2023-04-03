#include <stdio.h>
#include <stdlib.h>

typedef struct num {
        int n_size;
        int *arr;
} num;

static int comp(const void *ptr1, const void *ptr2)
{
        num* num1 = (num *) ptr1;
        num* num2 = (num *) ptr2;
        if (num1->n_size > num2->n_size)
                return -1;
        else if (num1->n_size < num2->n_size)
                return 1;
        else {
                for (int i = 0; i < num1->n_size; i++) {
                        if (num1->arr[i] < num2->arr[i])
                                return -1;
                        else if (num1->arr[i] > num2->arr[i])
                                return 1;
                }
        }

        return 0;
}

int 
main()
{
        int arr_size = 0;
        scanf("%d", &arr_size);

        num *nums = (num *)calloc(arr_size + 1, sizeof(num));

        for (int i = 0; i < arr_size; i++) {
                scanf("%d", &nums[i].n_size);

                nums[i].arr = (int *)calloc(nums[i].n_size, sizeof(int));

                for (int j = 0; j < nums[i].n_size; j++)
                        scanf("%d", &nums[i].arr[j]);
        }

        qsort(nums, sizeof(num), arr_size, comp);

        for (int i = 0; i < arr_size; i++) {
                printf("%d", nums[i].n_size);

                for (int j = 0; j < nums[i].n_size; j++)
                        printf("%d", nums[i].arr[j]);
        }

        free(nums);

        return 0;
}

