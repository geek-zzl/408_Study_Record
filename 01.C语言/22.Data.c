#include <stdio.h>

#define log(func) {\
    printf("%s = %d\n", #func, func);\
}
// #func 字符串化 func
struct Data
{
    int x,y;
};


int main() {
    struct Data a[2], *p = a;
    a[0].x = 0, a[1].y = 1;
    a[1].x = 2, a[1].y = 3;
    // a[1].x
    log(a[1].x);
    log((a + 1)->x);
    log((&a[1])->x);
    log((&a[0] + 1)->x);
    log((*(&a[0] + 1)).x);
    return 0;
}