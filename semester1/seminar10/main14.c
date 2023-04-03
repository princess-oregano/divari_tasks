#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
main()
{
        char str[200] = "";
        fgets(str, 200, stdin);

        int ch = 0;
        int 

        for (int i = 0; i < strlen(str); i++) {
                ch = str[i];

                while (isspace(ch))
                        ch = str[++i];

                ch = str[++i];

                while (!isspace(ch)) {
                        i++;
                        switch 
                }
        }
}
