#include <syscall.h>

#define N 100
int buffer[N];

int main()
{
        read(2, buffer, N / sizeof(int));
        write(1, buffer, N/ sizeof(int));
        return 0;
}
