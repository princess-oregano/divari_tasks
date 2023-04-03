#include <stdio.h>

#define NUM 4

typedef struct product_t {
        int value;
        int number;
        float price;
} product_t;

int main()
{
        int id = 0;
        int num = 0;
        product_t arr[NUM] = {{1, 5, 45.25},
                              {2, 4, 23.20},
                              {3, 2,  2.54},
                              {4, 16, 1.26}};

        printf("Old data:\n");
        for (int i = 0; i < NUM; i++)
                printf("id = %d, number = %d, price = %f\n", 
                        arr[i].value, arr[i].number, arr[i].price);

        printf("Enter id: ");
        while (scanf("%d", &id) == 1) {
                printf("Enter new number: ");
                scanf("%d", &num);
                for (int i = 0; i < NUM; i++)
                        if (arr[i].value == id)
                                arr[i].number = num;

        printf("Enter id: ");
        }

        printf("New data:\n");
        for (int i = 0; i < NUM; i++)
                printf("id = %d, number = %d, price = %f\n", 
                        arr[i].value, arr[i].number, arr[i].price);

        return 0;
}

