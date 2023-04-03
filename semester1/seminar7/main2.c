#include <stdio.h>

typedef struct point_t {
        int x;
        int y;
} point_t;

typedef struct rect_t {
        point_t lt;
        point_t rb;
} rect_t;

void turn_rect_rel_y(rect_t *rect);

int main()
{
        rect_t rect = {};

        printf("Enter coordinates:\n");
        scanf("%d %d %d %d", &rect.lt.x, &rect.lt.y, &rect.rb.x, &rect.rb.y);

        printf("Old coordinates:\n");
        printf("lt: x = %d, y = %d\n", rect.lt.x, rect.lt.y);
        printf("rb: x = %d, y = %d\n", rect.rb.x, rect.rb.y);

        turn_rect_rel_y(&rect);

        printf("New coordinates(turned relatively to y):\n");
        printf("lt: x = %d, y = %d\n", rect.lt.x, rect.lt.y);
        printf("rb: x = %d, y = %d\n", rect.rb.x, rect.rb.y);

        return 0;
}

void turn_rect_rel_y(rect_t *rect) 
{
        int l = rect->rb.x - rect->lt.x; 

        rect->lt.x = - rect->lt.x - l;
        rect->rb.x = - rect->rb.x + l;
}

