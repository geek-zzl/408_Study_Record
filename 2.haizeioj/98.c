/*************************************************************************
	> File Name: 98.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2022 02:56:41 PM CST
 ************************************************************************/

#include<stdio.h>

#define PI 3.14
int main() {
    double r = 0, h = 0;
    scanf("%lf%lf", &r, &h);
    printf("%.2lf\n", r * r * PI);
    printf("%.2lf\n", r * r * PI * h);
    return 0;
}
