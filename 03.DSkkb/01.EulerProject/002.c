/*************************************************************************
	> File Name: 002.c
	> Author: 
	> Mail: 
	> Created Time: Mon 11 Apr 2022 08:29:56 PM CST
 ************************************************************************/

#include<stdio.h>

const int N = 4000010;

int q[4000010];


int main() {
    // feb enven 项之和
    q[1] = 1;
    q[2] = 2;
    long long ans = 2;
    for (int i = 3; ; i ++) {
        q[i] = q[i - 1] + q[i - 2];
        if (q[i] >= 4000000)
            break;
        if (q[i] % 2 == 0)
            ans += q[i];
    }
    printf("%lld\n", ans);

    /****************************/
    // += 是前两项之和， b - a 是最前项
    int a = 1, b = 1;
    ans = 0;
    while (b < 4000000) {
        if (b % 2 == 0)
            ans += b;
        b += a;
        a = b -a;
    }
    printf("ans 2 = %lld\n", ans);
    return 0;
}
