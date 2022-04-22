// // C = A * b, A >= 0, b >= 0
// vector<int> mul(vector<int> &A, int b) {
//     vector<int> C;
//     int t = 0; //进位
//     for (int i = 0; i < A.size() || t; i ++) {
//         if (i < A.size()) t += A[i] * b;
//         C.push_back(t % 10);
//         t /= 10;
//     }
//     //if (t) C.push_back(t);
//     while (C.size() > 1 && C.back() == 0) C.pop_back();
//     return C;
// }

// 大数 乘 大数
// 将数字倒序存储
// 两重循环 乘 累加
#include <stdio.h>
#include <string.h>

char s1[1005], s2[1005];
int n1[1005], n2[1005], ans[2005];

int main() {
    scanf("%s%s", s1, s2);
    
    n1[0] = strlen(s1);
    for (int i = 0, j = n1[0]; i < n1[0]; i ++, j --)
        n1[j] = s1[i] - '0';

    n2[0] = strlen(s2);
    for (int i = 0, j = n2[0]; i < n2[0]; i ++, j --)
        n2[j] = s2[i] - '0';

    ans[0] = n1[0] + n2[0] - 1;

    for (int i = 1; i <= n1[0]; i ++)
        for (int j = 1; j <= n2[0]; j ++)
            ans[i + j - 1] += n1[i] * n2[j];

    for (int i = 1; i <= ans[0]; i ++) {
        if (ans[i] > 9) {
            ans[i + 1] += ans[i] / 10;
            ans[i] %= 10;
            if (i == ans[0]) {
                ans[0] ++;
            }
        }
    }

    for (int i = ans[0]; i > 0; i --) {
        printf("%d", ans[i]);
    }
    printf("\n");

    return 0;
}