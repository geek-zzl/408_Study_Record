// 简单选择排序
#include <stdio.h>

void selection_sort(int *num, int n) {
    for (int i = 0; i < n - 1; i ++) { // 循环轮数
        int ind = i; // 这一轮最小元素下标
        for (int j = i + 1; j < n; j ++) { // 找出最小
            if (num[j] < num[ind]) {
                ind = j;
            }
        }
        // 交换 最小元素 与 待交换位置元素
        int t = num[i];
        num[i] = num[ind];
        num[ind] = t;
    }
}
int main() {
    int n, num[105];
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &num[i]);
    }

    selection_sort(num, n);

    for (int i = 0; i < n; i ++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}