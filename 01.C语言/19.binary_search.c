#include <stdio.h>

int binary_search(int * arr, int n, int x) {
    int head = 0, tail = n -1, mid;

    while (head <= tail) {
        mid = head + tail >> 1;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            tail = mid - 1;
        else
            head = mid + 1;
    }
    return -1;
}

int main() {
    int arr[100] = {0}, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++)
    {
        // scanf("%d", &arr[i]);
        scanf("%d", arr + i);
    }

    int x;
    while(~scanf("%d", &x)) {
        printf("search(%d) : %d\n", x, binary_search(arr, n, x));
    }
    return 0;
}