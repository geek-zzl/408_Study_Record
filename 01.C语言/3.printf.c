/*************************************************************************
	> File Name: 3.printf.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2022 09:24:22 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int ret = printf("%d", n);
        printf(" has %d digits!\n", ret);
    }
    return 0;
}
