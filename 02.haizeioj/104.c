/*************************************************************************
	> File Name: 104.c
	> Author: 
	> Mail: 
	> Created Time: Mon 14 Mar 2022 09:07:03 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while(n) {
        if(n%10==9) {
            printf("YES\n");
            return 0;
        }
        n /= 10;
    }
    printf("NO\n");
    return 0;
}
