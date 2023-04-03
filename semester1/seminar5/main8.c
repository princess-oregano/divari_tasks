#include <stdio.h>

#define ARR_SIZE 10001

int main()
{
        size_t num = 0;
        size_t arr[ARR_SIZE] = {0};
        size_t count = 100000000;
        size_t i = 0;

        while (scanf("%zu", &num) == 1) {
                i++;
                if (i >= count)
                        break;
                if (num >= ARR_SIZE)
                        continue;
                arr[num] = num;
        }

        for (i = 0; i < ARR_SIZE; i++) {
                if (arr[i] == i && i != 0)
                        printf("%zu ", i);
        }

        printf("\n");
        return 0;
}

