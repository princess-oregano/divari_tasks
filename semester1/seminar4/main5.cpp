#include <stdio.h>

enum coord_t {
        INTERSECT      = 1,
        FIRST_CIRCLE   = 2,
        SECOND_CIRCLE  = 3,
        OUT_OF_CIRCLES = 4,
};

coord_t find_coord(float x1, float y1, float x2, float y2,
                   float r1, float r2, float x,  float y);

int main()
{
        float x1 = 0; 
        float y1 = 0;
        float x2 = 0;
        float y2 = 0;
        float r1 = 0;
        float r2 = 0;
        float x  = 0;
        float y  = 0;

        printf("Enter coordinates and radius of the first circle:\n");
        printf("x1 = ");
        scanf("%f", &x1);
        printf("y1 = ");
        scanf("%f", &y1);
        printf("r1 = ");
        scanf("%f", &r1);

        printf("Enter coordinates and radius of the second circle:\n");
        printf("x2 = ");
        scanf("%f", &x2);
        printf("y2 = ");
        scanf("%f", &y2);
        printf("r2 = ");
        scanf("%f", &r2);
        
        printf("Enter coordinates of point:\n");
        printf("x = ");
        scanf("%f", &x);
        printf("y = ");
        scanf("%f", &y);

        switch (find_coord(x1, y1, x2, y2, r1, r2, x, y)) {
                case INTERSECT: 
                        printf("Point is in intersection.\n"); 
                        break;
                case FIRST_CIRCLE:
                        printf("Point is in first circle.\n");
                        break;
                case SECOND_CIRCLE:
                        printf("Point is in second circle.\n");
                        break;
                case OUT_OF_CIRCLES:
                        printf("Point is out of circles.\n");
                        break;
                default:
                        printf("Error: invalid coordinates.\n"); 
                        break;
        }

        return 0;
}

coord_t find_coord(float x1, float y1, float x2, float y2,
                   float r1, float r2, float x,  float y)
{
        if ((x - x1)*(x - x1) + (y - y1)*(y - y1) <= r1*r1) {
                if ((x - x2)*(x - x2) + (y - y2)*(y - y2) <= r2*r2) 
                        return INTERSECT;
                else 
                        return FIRST_CIRCLE;
        } else {
                if ((x - x2)*(x - x2) + (y - y2)*(y - y2) <= r2*r2)
                        return SECOND_CIRCLE;
                else 
                        return OUT_OF_CIRCLES;
        }
}

