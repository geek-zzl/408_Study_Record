/*************************************************************************
	> File Name: 004.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 08:52:16 PM CST
 ************************************************************************/
// 求两个三位数相乘得到的最大回文数

#include<stdio.h>

int val(int a){
    int b = 0, c = a; 
    while (c) {
        b = b * 10 + c % 10;
        c /= 10;
    }
    return a == b;
}

int main() {
    /**************/
    int ans = 0;
    printf("val(12321) = %d\n", val(12321));
    for (int i = 100; i < 1000; i ++) 
        for (int j = i; j < 1000; j ++) {
            int t = i * j;
            if (val(t)) 
                if (ans < t)
                    ans = t;
        }
    printf("%d\n", ans);
}
