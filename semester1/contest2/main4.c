#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *convert (char * dst, const char * src);

int main()
{
        char d[100];
        printf("%s\n", convert(d, "Hello,world!"));	// HeLlO,WoRlD!
                                                        //
        return 0;
}

char *convert (char * dst, const char * src)
{
        int i = 0;
        for (i = 0; src[i] != '\0'; i++) {
                if (isalpha(src[i])) {
                        if (i % 2 == 0)
                                dst[i] = toupper(src[i]);
                        else 
                                dst[i] = tolower(src[i]);
                } else {
                        dst[i] = src[i];
                }
        }

        dst[i] = '\0';

        return dst;
}

