/*************************************************************************
	> File Name: 103.c
	> Author: 
	> Mail: 
	> Created Time: Mon 14 Mar 2022 09:03:24 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    if (a%b)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
