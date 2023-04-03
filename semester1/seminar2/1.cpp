#include <stdio.h>
#include <math.h>

int main()
{
        const float min = 1.5684;
        const float max = 514461.56;

        size_t char_size = sizeof(char);
        size_t int_size = sizeof(int);
        size_t unsigned_int_size = sizeof(unsigned int);
        size_t float_size = sizeof(float);
        size_t long_long_int_size = sizeof(long long int);

        printf("Char          : %5zu %20.0lf %20.0lf \n", char_size, 0.0, pow(2, char_size * 8) - 1);
        printf("Int           : %5zu %20.0lf %20.0lf \n", int_size, -pow(2, int_size * 8) / 2, pow(2, int_size * 8) / 2 - 1);
        printf("Unsigned int  : %5zu %20.0lf %20.0lf \n", unsigned_int_size, 0.0, pow(2, unsigned_int_size * 8));
        printf("Float         : %5zu %20f %20e \n", float_size, min, max); 
        printf("Long long int : %5zu %20.0lf %20.0lf \n", long_long_int_size, 
                                                  -pow(2, long_long_int_size * 8) / 2, 
                                                   pow(2, long_long_int_size * 8) / 2 - 1);
}

