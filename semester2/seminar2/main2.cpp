#include <stdio.h>
#include "queue.h"

#define N 41

int main()
{
        queue_t q {};
        q_ctor(&q, 1);  

        for (int i = 2; i <= N; i++) {
                q_insert(&q, i);
        }
        q_dump(&q);

        while (q.size > 1) {
                q_insert(&q, q_out(&q));
                q_insert(&q, q_out(&q));
                q_out(&q);
                q_dump(&q);
        }

        fprintf(stderr, "%d\n", q_out(&q));

        return 0;
}
