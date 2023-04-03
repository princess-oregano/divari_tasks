#include <stdio.h>
#include <stdlib.h>
#include "hash_close.h"

int main()
{
        hashnode_t *table = (hashnode_t *) calloc(table_size, sizeof(hashnode_t));

        char key[50] = {};
        char data[50] = {};
        int ans = 0;
        printf("Choose an option:\n1) insert\n2) get\n3) erase\n");
        scanf("%d", &ans);

        while(1) {
                switch (ans) {
                        case 1:
                                printf("Enter word:\n");
                                printf(" $ ");
                                scanf("%s", key);
                                printf("Enter translation:\n");
                                printf(" $ ");
                                scanf("%s", data);
                                insert(table, key, data);
                                break;
                        case 3:
                                printf("Enter key:\n");
                                printf(" $ ");
                                scanf("%s", key);
                                erase(table, key);
                                break;
                        case 2:
                                printf("Enter key:\n");
                                printf(" $ ");
                                scanf("%s", key);
                                printf("%s\n", get(table, key));
                                break;
                        default:
                                fprintf(stderr, "Error\n");
                }
                printf("Choose an option:\n1) insert\n2) get\n3) erase\n");
                scanf("%d", &ans);
        }

        return 0;
}

