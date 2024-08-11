#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point edit(struct point p)
{
    p.x++;
    p.y = p.y + 5;
    return p;
};

void print(struct point p) {
    printf("%d %d\n",p.x,p.y);
}

int main() {
    struct point p1 = {23, 45};
    struct point p2 = {56, 90};

    p1 = edit(p1);
    p2 = edit(p2);

    print(p1);
    print(p2);
    
    return 0;
}