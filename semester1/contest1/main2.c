#include <stdio.h>

struct Point {
    int x;
    int y;
};

struct Rect {
    struct Point lt; // left top
    struct Point rb; // right bottom
};

void transform(struct Rect *r);

int main()
{
        struct Rect rect = {{2, 4}, {7, 1}};
        printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
        transform(&rect);
        printf("%d %d %d %d\n", rect.lt.x, rect.lt.y, rect.rb.x, rect.rb.y);
        return 0;
}

void transform(struct Rect *r)
{
        int l = r->rb.y;
        r->rb.y = - r->lt.y;
        r->lt.y = - l;
}

