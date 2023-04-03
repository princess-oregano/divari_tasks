#include <stdio.h>

typedef struct stud {
        float h;
        float w;
} stud;

int main()
{
        stud studs[100];
        int N = 0;
        scanf("%d", &N);

        for (int i = 0; i < N; i++)
                scanf("%f %f", &studs[i].h, &studs[i].w);

        stud tmp;
        for (int i = 0; i < N; i++) {
                for (int j = i; j < N; j++) {
                        if (studs[i].w > studs[j].w) {
                                tmp = studs[i];
                                studs[i] = studs[j];
                                studs[j] = tmp;
                        }
                }

        }

        for (int i = 0; i < N; i++) {
                for (int j = i; j < N; j++) {
                        if (studs[i].w == studs[j].w) {
                                if (studs[i].h < studs[j].h) {
                                        tmp = studs[i];
                                        studs[i] = studs[j];
                                        studs[j] = tmp;
                                }
                        }
                }
        }

        for (int i = 0; i < N; i++)
                printf("%.2f %.3f\n", studs[i].h, studs[i].w);

        return 0;
}
