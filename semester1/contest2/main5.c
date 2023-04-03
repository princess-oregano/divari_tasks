#include <stdio.h>
#include <stdlib.h>

struct _Decimal {
    char * a;          // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;    // наибольшая степень десяти
    unsigned int size; // размер выделенной динамической памяти в а (можно это поле не использовать).
};
typedef struct _Decimal Decimal;

Decimal * mult10 (const Decimal * a);

int main(){
    Decimal *a= calloc(1, sizeof(Decimal));

    Decimal * res;

        a->a = calloc(50, sizeof(char)); 
    
        a->a = "741";
        a->n = 2;
    
    res = mult10(a);          // res = a*10 = 147*10 = 1470
    
    printf("%s", res->a);                  // print 1470
    printf("\n");
   
    free(res->a);
    free(res);
    
    return 0;
}

Decimal * mult10 (const Decimal * a)
{
        Decimal *res = calloc(1, sizeof(Decimal));

        res->size = a->n + 2;
        fprintf(stderr, "a size = %d", a->n);
        fprintf(stderr, "size = %d", res->size);
        res->a = calloc(res->size, sizeof(char)); 

        res->a[0] = '0';
        for (int i = 1; i <= res->size; i++) {
                res->a[i] = a->a[i-1];   
        }

        res->n = a->n + 1;

        return res;
}
