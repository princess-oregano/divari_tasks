#include <stdio.h>
#include <stdlib.h>

struct Point {
    int x;
    int y;
};
struct Rect {
    struct Point lt; // left top
    struct Point rb; // right bottom
};

struct Rect * transform (const struct Rect * src);

int main()
{
    struct Rect a = {{2, 4}, {7, 1}};
    struct Rect * rect;
    rect = transform(&a);
    printf("%d %d %d %d\n", a.lt.x, a.lt.y, a.rb.x, a.rb.y);
    printf("%d %d %d %d\n", rect->lt.x, rect->lt.y, rect->rb.x, rect->rb.y);
    free(rect);
    return 0;
}
struct Rect *transform (const struct Rect *src)
{
        struct Rect *rect = calloc(1, sizeof(struct Rect)); 

        int l = src->rb.x - src->lt.x;

        rect->lt.x = - src->lt.y;
        rect->lt.y = src->lt.x + l;

        rect->rb.x = - src->rb.y;
        rect->rb.y = src->rb.x - l;

        return rect;
}
