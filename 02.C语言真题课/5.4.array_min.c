/*************************************************************************
	> File Name: 5.4.array_min.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 07:48:41 PM CST
 ************************************************************************/

#include<stdio.h>
#include <limits.h>

int main() {
    int n = 0;
    int array[100] = {0};
    int * p = array;
    int min = INT_MAX;
    int min_ind = 0;

    while(~scanf("%d", array + n)) {
        if (*(p+n) < min)
            min = *(p+n),min_ind = n;
        n ++;
    }
    
    for (int i = min_ind; i < 99; i ++  )
        p[i] = p[i + 1];

    for (int i= 0; i < n - 1; i ++) {
        i && printf(" ");
        printf("%d", *(p + i));
    }
    printf("\n");
    return 0;
}
