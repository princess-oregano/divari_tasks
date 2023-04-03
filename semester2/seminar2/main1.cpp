#include <stdio.h>
#include "queue.h"

int main()
{
        queue_t q {};
        q_ctor(&q, 0);  

        int N = 0;
        printf("Enter number of clients\n $ ");
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
                q_insert(&q, 0);
        }

        int time = (20 - 8) * 60;

        int i;
        for (i = 0; q.front != q.rear; i += 5) {
                if (i % 10 == 0) {
                        q_out(&q);
                }
                if ((i + 5) % 10 == 0) {
                        q_out(&q);
                }
        }

        fprintf(stderr, "Max allowed: %d . Time for wait: %d\n", time, i);
        if (time < i) {
                fprintf(stderr, "Better luck next day!\n");
        }

        q_dtor(&q);

        return 0;
}
