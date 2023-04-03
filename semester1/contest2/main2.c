#include <stdio.h>

struct Card {
    char rank;    // достоинство
    char suit;    // масть
};

int check(struct Card * hand)
{
        int ret = 0;        

        struct Card *p;
        for (p = hand; p->rank!=0; p++) {
                switch(p->rank) {
                        case 'Q':
                        case 'K':
                        case 'J':
                                ret += 10;
                                break;
                        case 'A':
                                ret += 11;
                                break;
                        case '2':
                                ret += 2;
                                break;
                        case '3':
                                ret += 3;
                                break;
                        case '4':
                                ret += 4;
                                break;
                        case '5':
                                ret += 5;
                                break;
                        case '6':
                                ret += 6;
                                break;
                        case '7':
                                ret += 7;
                                break;
                        case '8':
                                ret += 8;
                                break;
                        case '9':
                                ret += 9;
                                break;
                        case 'T':
                                ret += 10;
                        default:
                                break;
                }
        } 

        return ret;  
}       

int main()
{
        struct Card hand[] = {{'Q', 's'}, {'A','h'}, {'9', 'd'}, {0, 0}};
        struct Card * p;
        // напечатает QsAh9d
        for (p=hand; p->rank != 0; p++) {
            printf("%c%c", p->rank, p->suit);
        }
        printf("\n");
        // проверяем
        printf("%d\n", check(hand));
}
