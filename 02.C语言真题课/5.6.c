/*************************************************************************
	> File Name: 5.6.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 09:24:33 PM CST
 ************************************************************************/

#include<stdio.h>

void f(int i, char *cp) {
    for (; i; i --) {
        printf("%c", *cp++);
    }
}

int main() {
    char a[][3] = {"ABC", "DEF", "GHF"};
    char *p;
    p=a[0], f(1, p ++), f(1, p ++), f(1, p ++);
    printf("\n");

    p = a[1], f(3, p ++), f(2, p ++), f(1,p ++);
    printf("\n");

    printf("%s\n", a[0]);
    return 0;
}
