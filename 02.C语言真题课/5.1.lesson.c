/*************************************************************************
	> File Name: 5lesson.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 07:08:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b;
    int *p = a;
    int *q = &b;
    printf("%p : %d\n", p, *p);
    printf("%d\n", *(p+1));
    printf("%d\n", *p++);
    printf("%d\n", *p++);
    printf("%d\n", *p++);
    printf("%d\n", *(p+1));

    printf("%d\n", ++*p);
    return 0;

}
