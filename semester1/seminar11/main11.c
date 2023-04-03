#include <stdio.h>
#include <string.h>

int main()
{
    FILE *txt1, *txt2, *txt3, *txtB, *txtM;
    char strtxt[80], str1[80], str2[80], str3[80];
    int count1 = 0, count2 = 0, count3 = 0;
    printf("Enter the file name 1:\n");
    gets(str1);
    printf("Enter the file name 2:\n");
    gets(str2);
    printf("Enter the file name 3:\n");
    gets(str3);
    if (!(txt1 = fopen(str1, "r"))){
        printf("Error opening file 1!");
        return 0;
    }
    if (!(txt2 = fopen(str2, "r"))){
        printf("Error opening file 2!");
        return 0;
    }
    if (!(txt3 = fopen(str3, "r"))){
        printf("Error opening file 3!");
        return 0;
    }
    while (fgetc(txt1) != EOF)
        count1++;
    while (fgetc(txt2) != EOF)
        count2++;
    while (fgetc(txt3) != EOF)
        count3++;
    fclose(txt1);
    fclose(txt2);
    fclose(txt3);
    if (count1 < count2 && count1 < count3) {
        txtB = fopen(str1, "r");
        if (count2 < count3)
            txtM = fopen(str3, "w");
        else
            txtM = fopen(str2, "w");
    } else if (count2 < count1 && count2 < count3) {
        txtB = fopen(str2, "r");
        if (count1 < count3)
            txtM = fopen(str3, "w");
        else
            txtM = fopen(str1, "w");
    } else if (count3 < count1 && count3 < count2) {
        txtB = fopen(str3, "r");
        if (count1 < count2)
            txtM = fopen(str2, "w");
        else
            txtM = fopen(str1, "w");
    }
    while (fgets(strtxt, 80, txtB))
        fputs(strtxt, txtM);
    fclose(txtB);
    fclose(txtM);
    printf("OK!");
    return 0;
}
