#include <stdio.h>

typedef struct node {
    int x, y;
} node;

int main() {
    
    node a;
    a.x = 5;
    a.y = 20;
    printf("a.x = %d, a.y = %d\n", a.x, a.y);

    node *p = &a;
    p->x = 10;
    p->y = 40;
    printf("a.x = %d, a.y = %d\n", a.x, a.y);
    printf("p->x = %d, p->y = %d\n", p->x, p->y);
    
}