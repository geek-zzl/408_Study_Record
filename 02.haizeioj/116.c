// 读入三角形的三条边，进行如下的判断: 
// 如果输入值不合法，输出 illegal triangle; 
// 如果输入值合法，两条较短边的平方和大于最长边的平方，则输出 acute triangle, 表示锐角三角形; 
// 如果输入值合法，两条较短边的平方和等于最长边的平方，则输出 right triangle, 表示直角三角形; 
// 如果输入值合法, 两条较短边的平方和小于最长边的平方, 则输出 obtuse triangle, 表示钝角三角形.
// 注意：如果两条短边的和大于第三边，那么这个三角形就是合法的
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    
    // 三个数的直接插入排序
    if (a > b) {
        a ^= b, b ^= a; a ^= b;
    }
    if (b > c) {
        b ^= c, c ^= b, b ^= c;
    }
     if (a > b) {
        a ^= b, b ^= a; a ^= b;
    }

    if (c > a + b) {
        printf("illegal triangle\n");
        return 0;
    }
    
    int tmp1 = a * a + b * b;
    int tmp2 = c * c;
    if ( tmp1 == tmp2) {
        printf("right triangle\n");
    }
    if (tmp1 > tmp2) {
        printf("acute triangle\n");
    }
    if (tmp1 < tmp2) {
        printf("obtuse triangle\n");
    }
    return 0;
}