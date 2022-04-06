/*************************************************************************
	> File Name: 5.1pointer_arrow.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 07:23:18 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int *p, arr[10];
    p = arr;
    for (int i = 0; i < 10; i ++) {
        scanf("%d", p+i);
    }
    for (int i = 0; i < 10; i ++) {
        i && printf(" ");
        printf("%d",*p++);
    }
    puts("");
    return 0;
}
