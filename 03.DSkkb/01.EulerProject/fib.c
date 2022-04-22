#include <stdio.h>

int num[55];
// 递归 + 记忆化 约等于 递推
long long func(int x) {
    if (x == 1) return 1;
    else if (x ==2) 
        return 2;
    
    if (num[x] != 0)
        return num[x];

    return num[x] = func(x-1) + func(x-2);
}

int main() {
    int n;
    
    scanf("%d", &n);

/*    num[1] = 1;
    num[2] = 2;
    for (int i = 3; i <= n; i ++) {
        num[i] = num[i - 1] + num[i - 2];
    }
    printf("%lld\n", num[n]);
*/    
    printf("%lld\n", func(n));
    return 0;
}