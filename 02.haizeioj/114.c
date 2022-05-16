/*************************************************************************
	> File Name: 114.c
	> Author: 
	> Mail: 
	> Created Time: Mon 09 May 2022 05:19:34 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char a[2];
    scanf("%s", a);
    switch (a[0]) {
        case 'h': printf("He\n"); break;
        case 'l': printf("Li\n"); break;
        case 'c': printf("Cao\n"); break;
        case 'd': printf("Duan\n"); break;
        case 'w': printf("Wang\n"); break;
        default : printf("Not Here\n"); break;
    }
    return 0;
}
