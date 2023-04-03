#include <stdio.h>

int main()
{
        long long int i = 0;

        for (i = -10000; i <= 10000; i++) {
                if (i*i*i*i - i*i*i + 2*i*i - 5*i -57 == 0) {
                        printf("solution 1: %lld\n", i);
                        break;
                }
        }
                        
        for (i = -10000; i <= 10000; i++) {
                if (2*i*i*i*i - 3*i*i*i + 2*i*i - 5*i - 84 == 0) {
                        printf("solution 2: %lld\n", i);
                        break;
                }
        }
        
        for (i = -10000; i <= 10000; i++) {
                if (i*i*i*i - 3*i*i*i + 2*i*i - 5*i - 3 == 0) {
                        printf("solution 3: %lld\n", i);
                        break;
                }
        }

        return 0;
}
