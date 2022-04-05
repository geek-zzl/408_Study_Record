/*************************************************************************
	> File Name: 14.fac.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 26 10:58:52 2022
 ************************************************************************/

#include<stdio.h>
#include <math.h>

long long fac(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return n * fac(n - 1);
}

int main() {
    int n;
    printf("sizeof(int) = %ld\n", sizeof(int));
    printf("int = %.0lf\n", pow(2,31));
    while(~scanf("%d", &n)) {
        printf("%d! = %lld\n", n, fac(n));
    }
    return 0;
}
