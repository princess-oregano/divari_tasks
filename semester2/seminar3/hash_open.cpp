#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_open.h"

static void
hash_add(hashnode_t **hashnode, int new_cap)
{
        hashnode_t *hashnode_ptr = (hashnode_t *) calloc(1, sizeof(hashnode_t));

        if (hashnode_ptr == nullptr) {
                fprintf(stderr, "Couldn't allocate memory for list.hashnode.\n");
                return;
        }

        *hashnode = hashnode_ptr;
}

int
hash_func(hash_key_t key)
{
        return key % table_size;
}

void
insert(hashnode_t *table, hash_key_t key, char *data)
{
        int a = hash_func(key);
        hashnode_t *ptr = &table[a];
        hashnode_t *new_node = nullptr;

        if (ptr->next == nullptr) {
                memcpy(ptr->data, data, 50);
                ptr->key = key;
        } else {
                while (ptr->next != nullptr) {
                        ptr = ptr->next; 
                }
                hash_add(&new_node, 1);
                
                memcpy(new_node->data, data, 50);
                new_node->key = key;

                ptr->next = new_node;
        }

}

const char *
get(hashnode_t *table, hash_key_t key)
{
        int a = hash_func(key);
        hashnode_t *ptr = &table[a];

        while (ptr->key != key) {
                ptr = ptr->next; 

                if (ptr == nullptr) {
                        fprintf(stderr, "For %ld could not find entry.\n", key);
                        return (char *) "Error";
                }
        }

        return ptr->data;
}

void
erase(hashnode_t *table, hash_key_t key)
{
        int a = hash_func(key);
        hashnode_t *ptr = &table[a];
        hashnode_t *save = nullptr;

        if (ptr->next == nullptr) {
                memset(ptr->data, '\0', 50);
                ptr->key = 0;
        } else {
                while (ptr->key != key) {
                        save = ptr;
                        ptr = ptr->next; 

                        if (ptr == nullptr) {
                                fprintf(stderr, "For %ld could not find entry.\n", key);
                        }
                }
                save->next = ptr->next->next;
        }
}

