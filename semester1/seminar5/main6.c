#include <stdio.h>
#include <stdbool.h>
#include <string.h>
 
void SieveOfEratosthenes(int n);
 
int main()
{
        int n = 10000;
        printf("Prime numbers smaller than or equal to %d \n", n);
        SieveOfEratosthenes(n);
        return 0;
}
 
void SieveOfEratosthenes(int n)
{
        bool prime[n + 1];
        int p = 0;
        int j = 0;
        int i = 0;

        memset(prime, true, sizeof(prime));

        for (p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
                for (i = p * p; i <= n; i += p)
                        prime[i] = false;
                }
        }

        for (p = 2; p <= n; p++)
                if (prime[p]) {
                        if (j++ % 9 != 0) 
                                printf("%6d ", p);
                        else
                                printf("\n");
                }

        printf("\n");
}

