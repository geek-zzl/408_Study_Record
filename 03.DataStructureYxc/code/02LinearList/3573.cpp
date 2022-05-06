// 日期累加
// X天后的日期
#include <iostream>

using namespace std;

const int months[13] = {
    0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

int is_leap(int y) {
    if (y % 4 ==0 && y % 100 != 0 || y % 400 == 0) return 1;
    else return 0;
}

int get_days(int y, int m) {
    if (m == 2) return 28 + is_leap(y);
    return months[m];
}

int get_year_days(int y, int m) {
    if (m <= 2) return 365 + is_leap(y);
    return 365 + is_leap(y + 1);
}
int main() {
    int t;
    int y, m, d, a;
    cin >> t;
    while(t --)
    {
        cin >> y >>m >> d >> a;
        // 先论年数, 在论天数
        // 10^6 = ( 2700 年 + 365 天 )* 1000  ==> 3 * 1e6
        if (m == 2 && d == 29) a --, d = 1, m = 3;
        while (a > get_year_days(y, m)) {
            a -= get_year_days(y, m);
            y ++;
        }
        while (a --) {
            if (++ d > get_days(y, m)) {
                d = 1;
                if (++m > 12) {
                    m = 1;
                    y ++;
                }
            }
        }
        printf("%04d-%02d-%02d\n", y, m, d);
    }
    return 0;
}

// 1000个数据
// 1000 < y < 3000
// 1 < a < 10^6 (1e6)
// 10^9 会超时
// 10^7 ~ 10 ^8