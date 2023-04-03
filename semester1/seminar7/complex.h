typedef struct complex_t {
        double a;
        double b;
} complex_t;

complex_t complex_sum(complex_t cmp1, complex_t cmp2);
complex_t complex_sub(complex_t cmp1, complex_t cmp2);
void complex_mul(complex_t *sol, complex_t cmp1, complex_t cmp2);
void complex_div(complex_t *sol, complex_t cmp1, complex_t cmp2);

