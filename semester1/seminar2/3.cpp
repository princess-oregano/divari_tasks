#include <stdio.h>
#include <time.h>

int main ()
{
        //int curr_time = time(NULL);
        
        int curr_time = 0;

        scanf("%d", &curr_time);

        int hours = (curr_time / 3600) % 24;
        int minutes = (curr_time / 60) % 60;
        int seconds = curr_time % 60;

        printf("%02d:%02d:%02d\n", hours, minutes, seconds);

        return 0;
}

