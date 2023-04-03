#include <stdio.h>

enum coord_t {
        INTERSECT      = 1,
        FIRST_CIRCLE   = 2,
        SECOND_CIRCLE  = 3,
        OUT_OF_CIRCLES = 4,
};

typedef struct ball_t {
        float x;
        float y;
        float r;
} ball_t;

int find_coord(ball_t *ball1, ball_t *ball2, float x, float y);

int main()
{
        ball_t ball1 = {};
        ball_t ball2 = {};
        float x  = 0;
        float y  = 0;

        printf("Enter coordinates and radius of the first circle:\n");
        scanf("%f %f %f", &ball1.x, &ball1.y, &ball1.r);

        printf("Enter coordinates and radius of the second circle:\n");
        scanf("%f %f %f", &ball2.x, &ball2.y, &ball2.r);
        
        printf("Enter coordinates of point:\n");
        scanf("%f %f", &x, &y);

        switch (find_coord(&ball1, &ball2, x, y)) {
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

int find_coord(ball_t *ball1, ball_t *ball2, float x, float y)
{
        if ((x - ball1->x)*(x - ball1->x) + (y - ball1->y)*(y - ball1->y) <= ball1->r*ball1->r) {
                if ((x - ball2->x)*(x - ball2->x) + (y - ball2->y)*(y - ball2->y) <= ball2->r*ball2->r) 
                        return INTERSECT;
                else 
                        return FIRST_CIRCLE;
        } else {
                if ((x - ball2->x)*(x - ball2->x) + (y - ball2->y)*(y - ball2->y) <= ball2->r*ball2->r)
                        return SECOND_CIRCLE;
                else 
                        return OUT_OF_CIRCLES;
        }
}

