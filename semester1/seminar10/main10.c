#include <stdio.h>
#include <ctype.h>
#include <string.h>

int
main()
{
        char str1[100] = {0};
        char str2[200] = {0};

        fgets(str1, 100, stdin);
        size_t len = strlen(str1) - 1;
        str1[len] = '\0';

        int count = 0;
        for (int i = 0; i < len; i++) {
                if (isspace(str1[i]))
                        str2[count] = '\n';
                else 
                        str2[count] = str1[i];

                count++;

                if (isspace(str1[i])) {
                        while (isspace(str1[i]))
                                i++;
                        i--;
                }
        }

        printf("%s\n", str2);

        return 0;
}

