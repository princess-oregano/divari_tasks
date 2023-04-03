#include <stdio.h>

#define N 100
struct _Decimal {
    char a[N];   // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;       // наибольшая степень десяти
};
typedef struct _Decimal Decimal;

int is_equal (Decimal * a, Decimal * b);

int main(){
    Decimal a = {{"10000000000000"}, 13};  // set number 147
    Decimal b = {{"10000000000000"}, 13};  // set number 147
    Decimal z = {{3, 5}, 1};     // set number 53
    
    if (is_equal(&a, &b)) 
        printf("a==b\n");
        
    if (!is_equal(&a, &z)) 
        printf("a!=z\n");
        
    printf("\n");
    
    return 0;
}

int is_equal (Decimal * first, Decimal * second)
{
        int i = 0;

        if (first->n != second->n)
                return 0;

        for (i = 0; i <= first->n && i <= second->n; i++) {
                if (first->a[i] != second->a[i])
                        return 0;;
        }

        return 1;
}

