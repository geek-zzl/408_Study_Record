// 大和
// 求以下一百个50位数之和的前十位数字
// big decimal plus
#include <stdio.h>
#include <string.h>

char s1[1005], s2[1005];
int n1[1005], n2[1005], ans[1005];

int main() {
    scanf("%s%s", s1, s2);
    n1[0]  = strlen(s1);
    for (int i = 0, j = n1[0]; i < n1[0]; i ++, j --)
        n1[j] = s1[i] - '0';

    n2[0]  = strlen(s2);
    for (int i = 0, j = n2[0]; i < n2[0]; i ++, j --)
        n2[j] = s2[i] - '0';

    if (n1[0] > n2[0])
        ans[0] = n1[0];
    else
        ans[0] = n2[0];
    
    int t = 0; //进位
    int i = 0;
    for (i = 1; i <= ans[0]; i++) {
        // printf("n11 = %d n21 = %d\n", n1[i], n2[i]);
        t += n1[i] + n2[i];
        ans[i] = t % 10;
        t /= 10;
        // printf("ansi = %d t = %d\n", ans[i], t);
    }
    if (t) ans[i] = t;
    ans[0] ++;
    for (int i = ans[0]; i > 0; i --)
        printf("%d", ans[i]);
    putchar('\n');
}