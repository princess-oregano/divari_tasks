#include <stdio.h>

int main() 
{
        int sw;
        char a[255], b[255], c[255];

        scanf("%s %s %s", a, b, c);
        FILE* fa;
        FILE* fb;
        FILE* fc;
        fa = fopen(a, "r");
        fb = fopen(b, "r");
        fc = fopen(c, "w");
        while ((sw = getc(fa)) != EOF)
                putc(sw, fc);
        fclose(fa); 
        while ((sw = getc(fb)) != EOF)
                putc(sw, fc);
        fclose(fb);
        
        fclose(fc);
}
