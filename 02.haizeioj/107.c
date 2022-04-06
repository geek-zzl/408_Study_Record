/*************************************************************************
	> File Name: 105.c
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Mar 2022 01:24:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int h;
    scanf("%d", &h);
    if (h % 7 == 0 && h % 7 % 2 != 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
