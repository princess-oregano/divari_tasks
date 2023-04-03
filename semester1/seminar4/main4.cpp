#include <stdio.h>

enum mass_t {
        kg = 1,
        mg = 2,
         g = 3,
         t = 4,
         c = 5,
};

int main()
{
        float mass = 0;
        int mass_type = 0;
        float mass_kg = 0;

        printf("Enter mass type:\n");
        scanf("%d", &mass_type);

        printf("Enter mass:\n");
        scanf("%f", &mass);

        switch (mass_type) {
                case kg:
                        mass_kg = mass;
                        break;
                case mg:
                        mass_kg = mass * 0.000001;
                        break;
                case g: 
                        mass_kg = mass * 0.001;
                        break;
                case t:
                        mass_kg = mass * 1000;
                        break;
                case c: 
                        mass_kg = mass * 100;
                        break;
                default:
                        printf("Invalid mass type: %d\n", mass_type);
                        break;
        }

        printf("Entered mass in kg: %lg\n", mass_kg);

        return 0;
}

