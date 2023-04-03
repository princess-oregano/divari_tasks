#include <stdio.h>
#include <string.h>

int
main()
{
        char *found = NULL;
        char str1[200] = {0};
        char ch = 0;

        fgets(str1, 200, stdin);
        str1[strlen(str1) - 1] = '\0';
        
        scanf("%c", &ch);

        found = strchr(str1, ch);
        *found = '*';

        printf("%s\n", str1);

        return 0;
}
