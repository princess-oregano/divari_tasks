#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char s_cod[] = "000001010011100101110111";

void 
convert_octal(char **bin, char *argv);

int
main(int argc, char *argv[])
{
        char *bin = nullptr;
        convert_octal(&bin, argv[1]);

        if (bin == nullptr) {
                return 1;
        } 
        
        int i = 0;
        for (i = 0; bin[i] == '0'; i++)
                ;

        printf("%s\n", &bin[i]);

        free(bin);

        return 0;
}

void 
convert_octal(char **bin, char *argv)
{
        if (argv == nullptr) {
                fprintf(stderr, "Error: empty line.\n");
                return;
        }

        int size  = strlen(argv);

        if (size == 0) {
                fprintf(stderr, "Error: empty line.\n");
                return;
        }
        
        if (size > 100) {
                fprintf(stderr, "Error: too many characters.\n");
                return;
        }

        if (argv[0] == '0') {
                fprintf(stderr, "Error: number starts with zero.\n");
                return;
        }

        for (int i = 0; i < size; i++) {
                if (argv[i] < '0' || argv[i] > '7') {
                        fprintf(stderr, "Error: expected numbers from 0 to 7.\n");
                        return;
                }
        }

        char *tmp = (char *) calloc(size * 3 + 1, sizeof(char));

        for (int i = 0; i < size; i++) {
                strncpy(&tmp[i*3], &s_cod[(argv[i] - '0') * 3], 3);
        }

        *bin = tmp;
}
