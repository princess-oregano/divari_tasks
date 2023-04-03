#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

static int romanLetterValue(char letter)
{
        switch (letter) {
        case 'M': 
                return 1000;
        case 'D': 
                return 500;
        case 'C': 
                return 100;
        case 'L': 
                return 50;
        case 'X': 
                return 10;
        case 'V': 
                return 5;
        case 'I': 
                return 1;
        default:
                fprintf(stderr, "error: invalid Roman numeral letter '%c'\n", letter);
                exit(1);
        }
}

int intFromRoman(const char *s)
{
        int result = 0;
        int lastValue = INT_MAX;
        for (char ch = *s; ch != 0; ch = *(++s)) {
                int value = romanLetterValue(ch);
                if (value > lastValue) {
                        result += (value - 2 * lastValue);
                } else {
                        result += value;
                }
                lastValue = value;
        }
        return result;
}

int main() {
        char rome[100];
        scanf("%s", rome);
        printf("%d\n", intFromRoman(rome));
        return 0;
}
