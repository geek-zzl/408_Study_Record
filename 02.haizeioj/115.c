// 某种彩票的获奖号码由两位非零数组成，获奖规则如下
// 如果用户的号码和中奖号码完全相同，奖金为100元
// 如果用户的号码能匹配中奖号码的所有数字，奖金为20元
// 如果用户的号码能匹配中奖号码的一个数字，奖金为2元
#include <stdio.h>

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if (x == y) {
        printf("100\n");
        return 0;
    }
    int a1, a2, b1, b2;
    a1 = x / 10;
    a2 = x % 10;
    b1 = y / 10;
    b2 = y % 10;
    if (a1 == b2 && b1 == a2) {
        printf("20\n");
        return 0;
    }
    if (a1 == b1 || a2 == b2 || a2 == b1 || a1 == b2) {
        printf("2\n");
        return 0;
    }
    printf("0\n");
    return 0;
}