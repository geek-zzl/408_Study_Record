/*************************************************************************
	> File Name: 100.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2022 03:21:11 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n = 0;
    double ben = 0;
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("sizeof(long int) = %ld\n", sizeof(long int));
    printf("sizeof(long) = %ld\n", sizeof(long));
    printf("sizeof(long long) = %ld\n", sizeof(long long));
    scanf("%d", &n);
    for (int i = 0; i < 6; i++) {
        ben = (n + ben) * (1 + 0.00417);
    }
    printf("$%.2lf\n", ben);
    return 0;
}
