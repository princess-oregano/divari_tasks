#include <stdio.h>
#include <ctype.h>

#define N 100

struct _Decimal 
{
    char a[N];        // number is a[0]*10^0 + a[1]*10^1 + ..+ a[n]*10^n
    unsigned int n;           // наибольшая степень десяти
};
typedef struct _Decimal Decimal;

Decimal mult_int(Decimal input, unsigned int x)
{   
    unsigned int add = 0;
    int i = input.n + N/2;
    Decimal output = {{0}, N};
    for(i = input.n + N/2; ; i--)
    {
        unsigned int current_digit = 0;

        if(i < N/2)
            current_digit = 0;
        else
            current_digit = input.a[i - N/2] - '0';

        output.a[i] = '0' + (add + current_digit * x) % 10;
        add = (unsigned int) ((add + current_digit * x) / 10);

        if(i < N/2 && (output.a[i] - '0') == 0 && add == 0)
            break;
    }
    output.n = input.n + N/2 - i;
    for(int k = 0; k < output.n; k++)
    {
        output.a[k] = output.a[i + k + 1];
    }
    return output;
}

int main()
{
    Decimal num1 = {{"899177324"}, 8};
    Decimal num2 = mult_int(num1, 4478);
    printf("\n%d ", num2.n);
    for(int i = 0; i < num2.n; i++)
        printf("%c", num2.a[i]);
    return 0;
}
