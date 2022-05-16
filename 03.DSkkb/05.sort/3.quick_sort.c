#include <stdio.h>

void quick_sort_1(int *num, int left, int right) {
    if (left >= right) {
        return ;
    }

    int t = num[left];
    int l = left, r = right;
    // 挖坑填补法
    while (l < r) {
        while (l < r && num[r] >= t) r --;
        if (l < r) num[l] = num[r];
        while (l < r && num[l] <= t) l ++;
        if (l < r) num[r] = num[l];
    }
    num[l] = t;
    quick_sort_1(num, left, l - 1);
    quick_sort_1(num, l + 1, right);
}


void quick_sort(int *num, int l, int r) {
    int i = l - 1, j = r + 1;
    int x = num[l + r >> 1];
    
    if (l >= r) return ;
    
    while (i < j) {
        while (num[ ++ i] < x);
        while (num[ -- j] > x);
        if (i < j) {
            num[i] ^= num[j];
            num[j] ^= num[i];
            num[i] ^= num[j];
        }
    }
    quick_sort(num, l, j);
    quick_sort(num, j + 1, r);
}

int main() {
    int n, num[105];
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &num[i]);
    }

    quick_sort_1(num, 0, n - 1);

    for (int i = 0; i < n; i ++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}



