#include <stdio.h>

int
function(int c) 
{
        return (c << 5) - c; 
}

int
main()
{
        int c = 9;

        printf("%d", function(c));

        return 0;
}
