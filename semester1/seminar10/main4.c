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
        printf("str1 = %s\n", str1);
        size2 = getline(&str2, &size2, stdin);
        str2[size2 - 1] = '\0';
        printf("str2 = %s\n", str2);

        if (strlen(str1) < 7) {
                fprintf(stderr, "Invalid str1 length\n");
                return 1;
        }

        if (strlen(str2) < 4) {
                fprintf(stderr, "Invalid str2 length\n");
                return 1;
        }

        strncpy(&str1[4], &str2[1], 3);

        printf("str = %s\n", str1);

        return 0;
}
