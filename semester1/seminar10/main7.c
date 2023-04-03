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

        size_t len1 = strlen(str1);
        size_t len2 = strlen(str2);

        for (int i = 0; i < len1 - len2; i++) {
                if (strncmp(&str1[i], str2, len2) == 0) {
                        strcpy(&str1[i - 1], &str1[i + len2]);
                        break;
                }
        }

        printf("%s\n", str1);

        return 0;
}

