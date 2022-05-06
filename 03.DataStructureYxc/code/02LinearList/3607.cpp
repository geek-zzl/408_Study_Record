// 3607. 打印日期
// 给出年份y和一天中的第d天, 算出第d天是几月几号
// n组数据 yyyy-mm-dd
// 100 组 数据 最大 366 天
// 366 * 100
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int months[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int is_leap_year(int y) {
    if (y % 4 ==0 && y % 100 != 0 || y % 400 == 0) return 1;
    else return 0;
}

// y年m月有多少天
int get_days(int y, int m) {
    if (m == 2) return months[m] + is_leap_year(y);
    return months[m];
}

int main() {
    int y, x;
    int m, d;
    while (~(scanf("%d%d", &y, &x))) {
        m = 1,d = 0;
        // 模拟 一天一天的过
        while (x --) {
            // x <= 366
            if( ++ d > get_days(y, m)) {
                d = 1;
                if (++ m > 12) {
                    m = 1;
                    y ++;
                }
            }
        }
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    return 0;
}
