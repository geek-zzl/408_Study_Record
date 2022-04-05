/*************************************************************************
	> File Name: 4.test.c
	> Author: 
	> Mail: 
	> Created Time: Sat 12 Mar 2022 09:55:47 AM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    char str[100] = {0}; //清空
    int ret = 0;
    while ((ret = scanf("%[^\n]s", str)) != EOF ) {
        getchar();
        int ret2 = printf("%s", str);
        printf(" has %d chars!\n", ret2);
    }

    return 0;
}
