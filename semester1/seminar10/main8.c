#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
        char *str1 = NULL;
        char *str2 = NULL;
        size_t size1 = 0;
        size_t size2 = 0;

        size1 = getline(&str1, &size1, stdin);
        str1[size1 - 1] = '\0';
        size2 = getline(&str2, &size2, stdin);
        str2[size2 - 1] = '\0';

        char *star = strpbrk(str1, str2);
        *star = '*';

        printf("%s\n", str1);

        return 0;
}

