#include <stdio.h>

int main() {
    int n, num[105], target;

    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", &num[i]);
    }

    scanf("%d", &target);

    int l = 0, r = n - 1;
    while (l <= r) {
        // int mid = (l + r + 1) / 2;
        int mid = l + r >> 1;
        if (num[mid] == target) {
            printf("find target, ind -> %d \n", mid);
            return 0;
        } else if (num[mid] > target){
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    printf("not found target\n");
    return 0;
}