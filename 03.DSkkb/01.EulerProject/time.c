/*************************************************************************
	> File Name: time.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 07:52:39 PM CST
 ************************************************************************/

#include<stdio.h>

int main () {
    int n = 100;
    for (int i = 0; i < 100; i ++)
        for (int j = 0; j <= i; j ++) {
            printf("%d ", i * j);
        }
    printf("\n");
    // O(n^2)
    /*********************************/
    int i = 0, j = 5;
    while (i < n) {
        i += 5;
        while (j < i) {
            j ++;
            printf("%d ", i * j);
        }
    }
    // O(n + n)
    /**********************************/
     i = 0, j = 0;
    while (~scanf("%d", &n)) {
        
    
    while (i < n) {
        j ++;
        i += j;
//        printf("haha\n");
    }
    printf("j = %d\n", j);
    }// O(n^1/2)
    return 0;
}
