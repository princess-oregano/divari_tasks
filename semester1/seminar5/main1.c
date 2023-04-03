#include <stdio.h>

#define ARR_SIZE 14

void find_progression(int *arr, int arr_size);

int main()
{
        int arr[ARR_SIZE] = {1, 2, 3, 5, 7, 9, 11, 13, 12, 15, 25, 28,
                 40, 41};

        find_progression(arr, ARR_SIZE);

        return 0;
}

void find_progression(int *arr, int arr_size)
{
        int j = 0;
        int i = 0;
        int diff = 0;
        int len = 0;
        int longest_len = 2; 
        int longest_i = 0;

        for (i = 0; i < arr_size - longest_len; i += len-1) {
                diff = arr[i+1]-arr[i];
                for(j = i+2; j < arr_size && arr[j-1]+diff == arr[j]; ++j)
                        continue;
                len = j - i;
                if(longest_len < len){
                        longest_len = len;
                        longest_i = i;
                }
        }

        printf("Numbers in longest arithmetic progression: ");
        diff = arr[longest_i+1] - arr[longest_i];
        printf("[ ");
        for(i = 0; i < longest_len; ++i) {
                printf("%d", arr[longest_i + i]);
                if(i == longest_len-1)
                        printf(" ]\n");
                else
                        printf(", ");
        }
}

