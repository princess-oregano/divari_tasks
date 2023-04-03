#ifndef HASH_OP
#define HASH_OP

struct hashnode_t {
        long key = 0;
        char data[50];
        hashnode_t *next = nullptr;
};

typedef long hash_key_t;

const int table_size = 100;

int
hash_func(hash_key_t key);
void
insert(hashnode_t *table, hash_key_t key, char *data);
const char *
get(hashnode_t *table, hash_key_t key);
void
erase(hashnode_t *table, hash_key_t key);

#endif // HASH_OP

