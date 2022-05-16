# include <stdio.h>

void bubble_sort(int *num, int n) {    
    for (int i = 1; i < n; i ++) { // 循环轮数
        int flag = 0; // 某轮交换的标记
        for (int j = 0; j < n - i; j ++) { // 两两相邻比较
            if (num[j] > num[j + 1]) { // 逆序 则交换
                int t = num[j];
                num[j]  = num[j + 1];
                num[j + 1] = t;
                flag = 1;
            }
        }
        if (flag == 0) { // 某轮没有触发任何交换, 数据已经有序, 跳出. 
            break;
        }
    }
}

int main() {
    int n, num[105];
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &num[i]);
    }

    bubble_sort(num, n);

    for (int i = 0; i < n; i ++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}