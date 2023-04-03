#include <stdlib.h>
#include "queue.h"

static void
q_resize(node_t **node, int new_cap)
{
        node_t *node_ptr = (node_t *) calloc(1, sizeof(node_t));

        if (node_ptr == nullptr) {
                fprintf(stderr, "Couldn't allocate memory for list.node.\n");
                return;
        }

        *node = node_ptr;
}

void
q_ctor(queue_t *queue, int data)
{
        q_resize(&queue->front, 1);
        queue->front->data = data;
        queue->front->next = queue->front;
        queue->rear = queue->front;
        queue->rear->next = queue->front;
        queue->size = 1;
}

void
q_insert(queue_t *queue, int data)
{
        node_t *new_node = nullptr;

        q_resize(&new_node, 1);

        new_node->data = data;

        queue->rear->next = new_node;
        new_node->next = queue->front;
        queue->rear = new_node;

        queue->size++;
}

data_t
q_out(queue_t *queue)
{
        data_t save = queue->front->data;
        node_t *n = queue->front;

        queue->front = queue->front->next;
        queue->rear->next = queue->front;
        queue->size--;
        
        free(n);

        return save;
}

void
q_dump(queue_t *queue)
{
        node_t *ptr = queue->front;
        do {
                fprintf(stderr, "%d ", ptr->data);
                ptr = ptr->next;
        } while (ptr != queue->front);
        fprintf(stderr, "\n");
}

void
q_dtor(queue_t *queue)
{
        node_t *ptr = queue->front;
        do {
                node_t *save = ptr->next; 
                free(ptr);
                ptr = save;
        } while (ptr != queue->front);
}
