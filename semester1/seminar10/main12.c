#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int
main()
{
        char *str = NULL;
        size_t size = 0;

        size = getline(&str, &size, stdin);
        str[size - 1] = '\0';

        size_t len = strlen(str);

        int n = 0;
        for (int i = 0; i < len; i++) {
                if (str[i] == str[i+1]) {
                        i++;
                        n = i;
                        while (str[i] == str[n])
                                n++;

                        strcpy(&str[i], &str[n]);
                }
        }

        printf("%s\n", str);

        return 0;
}

