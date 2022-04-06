/*************************************************************************
	> File Name: 105.c
	> Author: 
	> Mail: 
	> Created Time: Wed 16 Mar 2022 01:24:52 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double h;
    scanf("%lf", &h);
    if (h > 0)
        printf("%.1lf\n", h);
    else
        printf("%.1lf\n", 0 - h);
    return 0;
}
