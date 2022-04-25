// 动态内存分配
// malloc() 分配未初始化的内存
// calloc() allocates and zeroes memory
// realloc() expands previously allocated memory block
// free() deallocates previously allocated memory
// cppreference.com
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num = (int *)malloc(100000 * sizeof(int));
    num[99999] = 999;

    printf("%d %d %d\n", num[0], num[99999], num[12345]);
    free(num);
    
    // printf("%d %d %d\n", num[0], num[99999], num[12345]);
    num = NULL;
    // 释放完可以访问，但危险
    return 0;
}