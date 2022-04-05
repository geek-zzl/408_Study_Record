/*************************************************************************
	> File Name: 16.gcd.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 26 14:39:47 2022
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return (b?gcd(b, a % b):a);
}

int main() {
    int m, n;
    while (~scanf("%d%d", &m, &n)){
        int (* func)(int, int);
        func = gcd;
        printf("gcd(%d, %d) = %d\n", m, n, func(m, n));
    }
    return 0;
}
