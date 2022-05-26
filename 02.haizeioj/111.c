// 111. 乘车费用
/*
// ​出租车计价方案为：3 公里内（含）的起步价是 13 元，
// 超过 3 公里之后按 2.3 元 / 公里，另外在整个乘车途中另加 1 元燃油附加费。
// 已知小明到奶奶家的路程为 N 公里，请计算出租车费用是多少元。
// 输入一个整数 1 ~ 30
// 输出 保留1位小数
*/
#include <stdio.h>

int main() {
    int n;
    double ret = 1;
    scanf("%d", &n);

    if (n <= 3)
        ret += 13;
    else
        ret += 13 + (n-3) * 2.3;
    
    if ((int)(ret * 10) % 10 == 0)
        printf("%.0lf\n", ret);
    else
        printf("%.1lf\n", ret);
    return 0;
}
