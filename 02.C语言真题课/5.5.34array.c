/*************************************************************************
	> File Name: 5.5.34array.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 08:29:15 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
    // 数组指针 : 指针 指向数组
    int (*p)[4] = a;
/*    printf("a = %p\n", a);
    printf("p = %p\n", p);
    printf("*a = %p\n", *a);
    printf("*a[0] = %d\n", *a[0]);
    printf("&a[0] = %p\n", &a[0]);
    printf("**a = %d\n", **a);*/

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 4; j ++)
            printf("%d\t", *(p[i]+j));
        printf("\n");
    }
//    p[i] +j
    return 0;

}
