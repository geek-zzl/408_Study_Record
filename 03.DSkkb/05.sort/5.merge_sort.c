// 归并排序
#include <stdio.h>

void merge_sort(int *num, int l, int r, int *temp) {
    if (l >= r) return ;
    int mid = (l + r) / 2;
    merge_sort(num, l, mid, temp);
    merge_sort(num, mid + 1, r, temp);

    int p1 = l, p2 = mid + 1, n = r - l + 1;
    for (int i = 0; i < n; i ++) {
        // p2 遍历完了, 选p1 
        // p1 没遍历完 并且小 选 p1
        if (p2 > r || (p1 <= mid && num[p2] <= num[p2])) {
            temp[i] = num[p1];
            p1 ++;
        } else {
            temp[i] = num[p2];
            p2 ++;
        }
    }
    for (int i = 0, j = l; i < n || j <= r; i ++, j ++) {
        num[j] = temp[i];
    }
}

int main() {
    int n, num[105];

    scanf("%d", &n);
    for (int i = 0; i < n; i ++) {
        scanf("%d", &num[i]);
    }

    int temp[105];
    merge_sort(num, 0, n - 1, temp);

    for (int i = 0; i < n; i ++) {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}

int tmp[100];
void merge_sort1(int q[], int l, int r)
{
    if (l >= r)
        return ;
    
    int mid = l + r >> 1;

    merge_sort1(q, l, mid);
    merge_sort1(q, mid + 1, r);
    
    int k = 0, i = l, j = mid + 1;
    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
            tmp[k ++] = q[i ++];
        else
            tmp[k ++] = q[j ++];
    }
    
    while (i <= mid)
        tmp[k++] = q[i++];
    while (j <= r)
        tmp[k++] = q[j++];
    
    for (i = l, j = 0; i <= r; i++, j++)
        q[i] = tmp[j];
}