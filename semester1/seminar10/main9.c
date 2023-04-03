#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int
main()
{
        char *str = NULL;
        size_t size = 0;

        size = getline(&str, &size, stdin);
        str[size - 1] = '\0';
        size_t len = strlen(str);

        for (int i = 0; i < len; i++) {
                if(isdigit(str[i])) 
                        str[i] = str[i] - '1' + 'a';
        }

        printf("%s\n", str);

        return 0;
}

