// 日期合法性

#include <stdio.h>

int check_data(int y, int m, int d) {
    int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m <= 0 || m > 12 || d < 1 || d > 31)
        return 0;
    
    if (((y % 4 == 0) && (y %100 != 0)) || y % 400 == 0)
        month[2] += 1;
    
    return d <= month[m];

}

int main() {

    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    printf("%s\n", check_data(y, m, d)?"YES":"NO");
    return 0;
}