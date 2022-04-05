/*************************************************************************
	> File Name: 27.max_int.c
	> Author: 
	> Mail: 
	> Created Time: Sat Mar 26 15:13:14 2022
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>
#include <stdarg.h>

int max_int(int n, ...) {
    va_list arg;
    va_start(arg, n);

    int ans = INT32_MIN; // 32位整形的极小值
    
    while (n --) {
        int temp = va_arg(arg, int);
        if (temp > ans)
            ans = temp;
    }
    va_end(arg);
    return ans;
}

int main() {
    printf("MAX(3,22,0,1) = %d\n", max_int(3,22,0,1));
    return 0;
}
