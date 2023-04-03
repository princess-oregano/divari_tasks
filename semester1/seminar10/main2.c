#include <stdio.h>
#include <stdlib.h>

typedef struct str{
char s[70];\
int a;
char t;
} str;

int
main()
{
        str arr[2];
        int i = 0;

        for (i = 0; i < 2; i++) {
                scanf("%s%d%c", arr[i].s, &arr[i].a, &arr[i].t);

                while (getchar() != '\n')
                        ;
        }

        for (i = 0; i < 2; i++)
                printf("%s\n%d\n%c\n", arr[i].s, arr[i].a, arr[i].t);

        return 0;
}
