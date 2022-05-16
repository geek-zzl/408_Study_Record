// 直接插入排序
#include <stdio.h>

#define SWAP(A, B) {(A) ^= (B); (B) ^= (A); (A) ^= (B);}


// 与王道书思路略有差异 但结果相同 
// 此处为两两交换
// 王道为挪位而不交换
void insertion_sort(int *num, int n) {
    for (int i = 1; i < n; i ++) {
        for (int j = i - 1; j >= 0; j --) {
            if (num[j] > num[j + 1]) {
                SWAP(num[j], num[j + 1]);
            } else {
                break;
            }
        }
    }
}

void InsertSort(int *num, int n) {
    int i,j;
    for (i = 1; i <= n; i ++) { // 将num[1]~num[n - 1]插入到前面已排序序列
        if (num[i] < num[i - 1]) { // 若num[i] 关键码小于其前驱, 将num[i] 插入有序表
            num[n] = num[i];    // 复制为哨兵 num[n] 不存放元素
            for (j = i - 1; num[n] < num[j]; j --) { // 从后往前查找待插入位置
                num[j + 1] = num[j]; // 向后挪位
            }
            num[j + 1] = num[n]; // 复制到插入位置
        }
    }
}

int main() {
    int n, num[105];
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", num + i);
    }

    insertion_sort(num, n);

    InsertSort(num, n);

    for (int i = 0; i < n; i ++) {
        printf("%d ", num[i]);
    }
    printf("%d\n", num[n]);
    return 0;
}
