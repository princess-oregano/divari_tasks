#include <stdio.h>
#include <stdlib.h>
#include "hash_open.h"

int main()
{
        hashnode_t *table = (hashnode_t *) calloc(table_size, sizeof(hashnode_t));

        int number = 0;
        char data[50] = {};
        int ans = 0;
        printf("Choose an option:\n1) insert\n2) get\n3) erase\n");
        scanf("%d", &ans);

        while(1) {
                switch (ans) {
                        case 1:
                                printf("Enter surname:\n");
                                printf(" $ ");
                                scanf("%s", data);
                                printf("Enter number:\n");
                                printf(" $ ");
                                scanf("%d", &number);
                                insert(table, number, data);
                                break;
                        case 3:
                                printf("Enter number:\n");
                                printf(" $ ");
                                scanf("%d", &number);
                                erase(table, number);
                                break;
                        case 2:
                                printf("Enter number:\n");
                                printf(" $ ");
                                scanf("%d", &number);
                                printf("%s\n", get(table, number));
                                break;
                        default:
                                fprintf(stderr, "Error\n");
                }
                printf("Choose an option:\n1) insert\n2) get\n3) erase\n");
                scanf("%d", &ans);
        }

        return 0;
}

