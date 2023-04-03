#include <stdio.h>

typedef struct date_t {
        int month;
        int year;
} date_t;

int main()
{
        date_t arr[3]= {{1, 1998},
                        {2, 2005},
                        {}};

        printf("Enter a date:\n");
        scanf("%d %d", &arr[2].month, &arr[2].year);

        if (arr[2].year * 12 + arr[2].month >= arr[0].year * 12 + arr[0].month &&
            arr[2].year * 12 + arr[2].month <= arr[1].year * 12 + arr[1].month)
                printf("In period.\n");
        else 
                printf("Not in period.\n");

        return 0;
}

