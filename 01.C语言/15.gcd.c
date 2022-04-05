/*************************************************************************
	> File Name: 15.gcd.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 26 14:39:47 2022
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int m, n;
    while (~scanf("%d%d", &m, &n)){
        printf("gcd(%d, %d) = %d\n", m, n, gcd(m, n));
    }
    return 0;
}
