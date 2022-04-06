/*************************************************************************
	> File Name: 101.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2022 04:03:44 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    while(n) {
        sum += n %10;
        n /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
