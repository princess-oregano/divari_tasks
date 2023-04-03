#include <stdio.h>

struct pay_t {
        long timestamp;
        int id;
        int recept_id;
};

int
main()
{
        struct pay_t pay[10000];
        int n = 0;
        int i = 0;

        scanf("%d", &n);

        for (i = 0; i < n; i++) {
                scanf("%ld %d %d", &pay[i].timestamp, &pay[i].id, &pay[i].recept_id);
        }

        printf("%ld", pay[n - 1].timestamp - pay[0].timestamp);

        return 0;
}
