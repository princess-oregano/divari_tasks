#include <stdio.h>
#include <string.h>
#include "hash_close.h"

int
hash_func(hash_key_t key)
{
        int ret_val = 0;
        int a = strlen(key);
        for (int i = 0; i < a; i++) {
                ret_val *= 11;
                ret_val += key[i];
        }

        return ret_val % table_size;
}

void
insert(hashnode_t *table, hash_key_t key, char *data)
{
        int a = hash_func(key);
        while (strlen(table[a].key) != 0) {
                a++;
        }

        memcpy(table[a].key, key, 50);
        table[a].flag = 1;
        memcpy(table[a].data, data, 50);
}

const char *
get(hashnode_t *table, hash_key_t key)
{
        int a = hash_func(key);
        if (strcmp(table[a].key, key) != 0 && table[a].flag == 0) {
                fprintf(stderr, "Couldn't find entry for %s\n", key);
                return (char *) "Error";
        }

        while (strcmp(table[a].key, key) != 0) {
                a++;
                if (a == table_size - 1) {
                        fprintf(stderr, "Couldn't find entry for %s\n", key);
                        return (char *) "Error";
                }
        }

        return table[a].data;
}

void
erase(hashnode_t *table, hash_key_t key)
{
        int a = hash_func(key);
        while (strcmp(table[a].key, key) != 0) {
                a++;
                if (a == table_size) {
                        fprintf(stderr, "Couldn't find entry for %s\n", key);
                        return;
                }
        }

        memset(table[a].data, '\0', 50);
        memset(table[a].key, '\0', 50);
}

