/*************************************************************************
	> File Name: 008.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 09:20:09 PM CST
 ************************************************************************/
// 连续数字最大乘积

#include<stdio.h>


int main() {
    char str[1005];
    scanf("%s", str);
    long long now = 1, ans = 0, cnt = 0;
    for (int i = 0; i < 1000; i ++) {
        if (i < 13)
            now *= str[i] - '0';
        else {
            if (str[i] == '0')
                cnt ++;
            else
                now *= str[i] - '0';
            if (str[i - 13] == '0')
                cnt --;
            else
                now /= str[i - 13] - '0';

        }
        if (cnt == 0 && ans < now)
            ans = now;
    }
    printf("ans = %lld\n", ans);
}
