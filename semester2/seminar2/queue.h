#include <stdio.h>

typedef int data_t;

struct node_t {
        data_t data = 0;
        node_t *next = nullptr;
};

struct queue_t {
        node_t *front = nullptr;
        node_t *rear = nullptr;
        int size = 0;
};

void
q_ctor(queue_t *queue, int data);
void
q_insert(queue_t *queue, int data);
data_t
q_out(queue_t *queue);
void
q_dump(queue_t *queue);
void
q_dtor(queue_t *queue);

