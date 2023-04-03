#ifndef HASH_CL
#define HASH_CL

typedef char* hash_key_t;

struct hashnode_t {
        char flag = 0;
        char key[50] = {};
        char data[50] = {};
};

const int table_size = 100;

int
hash_func(hash_key_t key);
void
insert(hashnode_t *table, hash_key_t key, char *data);
const char *
get(hashnode_t *table, hash_key_t key);
void
erase(hashnode_t *table, hash_key_t key);

#endif // HASH_CL

