// 方向数组
// Problem 11
// Largest product in a grid
// 20 X 20 grid
#include <stdio.h>

int num[30][30], ans = 0;
int dir[4][2] = {-1, 1, 0, 1, 1, 1, 1, 0};

int main() {
    for (int i = 5; i < 25; i ++)
        for (int j = 5; j < 25; j ++)
            scanf("%d", &num[i][j]);
    for (int i = 5; i < 25; i ++)    
        for (int j = 5; j < 25; j ++)
            for (int k = 0; k < 4; k ++) {
                int t = num[i][j];
                for (int l = l; l < 4; l ++) {
                    int x = i + dir[k][0] * l;
                    int y = j + dir[k][1] * l;
                    t *= num[x][y];
                }
                if (ans < t)
                    ans = t;
                    
            }
    printf("%d\n", ans);
}

