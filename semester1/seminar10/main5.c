#include <stdio.h>
#include <string.h>

int
main()
{
        char str1[200] = {0};
        char str2[100] = {0};

        fgets(str1, 100, stdin);
        str1[strlen(str1) - 1] = '\0';
        fgets(str2, 100, stdin);
        str2[strlen(str2) - 1] = '\0';

        strcat(str1, str2);

        printf("str = %s\nlen = %zu\n", str1, strlen(str1));

        return 0;
}
