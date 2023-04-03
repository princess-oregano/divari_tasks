#include <stdio.h>
#include <string.h>

typedef struct stud {
        char fam[20];
        char nam[20];
        int gr;
        int year;
        int ball[5];
} stud;

int main()
{
        stud studs[5] = {{"Fam", "Nam", 2, 2004, {5, 5, 5, 5, 5}},
                         {"Merit", "Lily", 1, 2003, {1, 5, 5, 5, 5}},
                         {"Mimy", "Memy", 2, 2003, {3, 2, 5, 4, 4}},
                         {"Coll", "Saul", 1, 2002, {5, 5, 5, 5, 5}},
                         {}};
        float grade;
        char full_name1[40] = "";
        char full_name2[40] = "";

        printf("Enter student data:\n");
        scanf("%s", studs[4].fam);
        scanf("%s", studs[4].nam);
        scanf("%d", &studs[4].gr);
        scanf("%d", &studs[4].year);
        for (int i = 0; i < 5; i++) 
                scanf("%d", &studs[4].ball[i]);

        printf("A-grade students:\n");
        for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++)
                        grade += (float) studs[i].ball[j] / 5;

                if (grade == 5) {
                        printf("%s %c.\n", studs[i].fam, studs[i].nam[0]);
                }

                grade = 0;
        }

        printf("Student, born in %d:\n", studs[4].year);
        for (int i = 0; i < 5; i++) {
                if (studs[i].year == studs[4].year)
                        printf("%s\n", studs[i].fam);
        }

        printf("Sorted by group:\n");
        for (int i = 0; i < 5; i++) {
                for (int j = i; j < 5; j++)
                        if (studs[i].gr > studs[j].gr) {
                                stud temp = studs[i];
                                studs[i] = studs[j];
                                studs[j] = temp;
                        }
        }
                        
        for (int i = 0; i < 5; i++) 
                        printf("%s\n", studs[i].fam);

        printf("Sorted by surname and name:\n");
        for (int i = 0; i < 5; i++) {
                for (int j = i; j < 5; j++) {
                        strcpy(full_name1, studs[i].fam);
                        strcat(full_name1, studs[i].nam); 
                        strcpy(full_name2, studs[j].fam);
                        strcat(full_name2, studs[j].nam); 

                        if (strcmp(full_name1, full_name2) > 0) {
                                stud temp = studs[i];
                                studs[i] = studs[j];
                                studs[j] = temp;
                        }
                }
        }
                        
        for (int i = 0; i < 5; i++) 
                        printf("%s %s\n", studs[i].fam, studs[i].nam);


        printf("Sorted by group then surname and name:\n");
        for (int i = 0; i < 5; i++) {
                for (int j = i; j < 5; j++) {
                
                        strcpy(full_name1, studs[i].fam);
                        strcat(full_name1, studs[i].nam); 
                        strcpy(full_name2, studs[j].fam);
                        strcat(full_name2, studs[j].nam); 

                        if (strcmp(full_name1, full_name2) > 0) {
                                stud temp = studs[i];
                                studs[i] = studs[j];
                                studs[j] = temp;
                        }

                        if (studs[i].gr > studs[j].gr) {
                                stud temp = studs[i];
                                studs[i] = studs[j];
                                studs[j] = temp;
                        }
                }
        }
                        
        for (int i = 0; i < 5; i++) 
                        printf("%s %s\n", studs[i].fam, studs[i].nam);

        return 0;
}

