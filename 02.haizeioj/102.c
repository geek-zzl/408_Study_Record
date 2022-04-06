/*************************************************************************
	> File Name: 102.c
	> Author: 
	> Mail: 
	> Created Time: Mon 14 Mar 2022 08:33:05 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    double a,b,c,t;

    scanf("%lf%lf%lf%lf", &a, &b, &c, &t);

    double v = 0;
    v = a * b * c;

    double v_1 = 0; 
    v_1 = v- (b*c*t) -(a*c*t);

    double t_2 = 0;
    t_2 = v_1/(a*c + b*c - a*b);
    
    printf("%.2lf\n",t_2+t);
    return 0;
}
