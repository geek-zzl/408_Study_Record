// 网格路径
// 从一个2 * 2 网格 的左上角出发, 若只允许向右 或向下移动, 则恰好有6条抵达右下角的路径. 
// 对于20 * 20 网格, 这样的路径有多少条?
// 动态规划

#include <stdio.h>

int main() {
    long long ans[25][25] = {0};
    long long ans1 = 1;
    for (int i = 40, j = 1; i > 20; i --, j ++) {
        ans1 *= i;
        ans1 /= j;
    }
    for (int i = 0; i <= 20; i ++) {
        for (int j = 0; j <= 20; j ++) {
            if (i == 0 || j == 0) {
                ans[i][j] = 1;
            } else {
                ans[i][j] = ans[i - 1][j] + ans[i][j - 1];
            }
        }
    }
    printf("%lld\n", ans[20][20]);
    printf("%lld\n", ans1);
    return 0;
}