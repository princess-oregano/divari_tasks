#include <stdio.h>

int main()
{
        float price = 0;
        int first_num = 0;
        int second_num = 0;
        int third_num = 0;
        float first_money = 0;
        float second_money = 0;
        float third_money = 0;

        printf("Enter the price:\n");
        scanf("%f", &price);
        printf("Enter the number of products bought:\n");
        scanf("%d %d %d", &first_num, &second_num, &third_num);
        printf("Enter the money given:\n");
        scanf("%f %f %f", &first_money, &second_money, &third_money);

        float first_overprice = (int) ((first_money - price * first_num) * 100) % 10;
        float second_overprice = (int) ((first_money - price * first_num) * 100) % 10;
        float third_overprice = (int) ((first_money - price * first_num) * 100) % 10;
       
        float total_overprice = first_overprice + second_overprice + third_overprice;
        
        printf("Overprice: %.2f\n", total_overprice);;

        return 0;
}

