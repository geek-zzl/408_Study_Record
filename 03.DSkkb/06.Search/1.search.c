#include <stdio.h>

int main() {
    int n, num[105], target;
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        scanf("%d", num+i);
    }

    scanf("%d", &target);

    for (int i = 0; i < n; i ++) {
        if (num[i] == target) {
            printf("find item at %d\n", i);
            return 0;
        }
    }
    printf("not found !\n");
    return 0;
}