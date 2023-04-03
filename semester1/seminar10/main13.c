#include <stdio.h>
#include <string.h>
#include <ctype.h>

int
main()
{
        char str[200] = "";
        fgets(str, 200, stdin);

        char ch = 0;
        for (int i = 0; i < strlen(str); i++) {
                ch = str[i];
                if (i == 0) {
                        while (isspace(ch))
                                ch = str[++i];

                        str[i] = toupper(ch);
                }

                while (ch != '.')
                        ch = str[++i];

                while (ch == '.')
                        ch = str[++i];

                ch = str[++i];

                while (isspace(ch))
                        ch = str[++i];

                str[i] = toupper(ch);
        }

        printf("%s", str);

        return 0;
}
