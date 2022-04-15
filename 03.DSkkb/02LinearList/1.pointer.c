#include <stdio.h>

// int (*q)[] = num;
int main() {
    // 指针
    int a = 5, b = 9;

    int *p = &a; // int * 类型
    
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
    
    p = &b;
    
    printf("b = %d\n", b);
    printf("*p = %d\n", *p);

    int num[105] = {9,8,7};
    int *q = num;

    q[1] = 100;
    printf("%d %d %d\n", num[0], num[1], num[2]);
    printf("num size = %lu, q size = %lu\n", sizeof(num), sizeof(q));

    printf("a -> %p\nb -> %p\np -> %p\nnum -> %p\nq -> %p\n", &a, &b, p, num, q);

    // 成员访问运算符
    typedef struct node {
        int x, y;
    }node;

    node A = {1, 2};

    return 0;
}
