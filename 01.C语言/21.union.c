#include <stdio.h>

union IP {
    struct {
        unsigned char bytes1;
        unsigned char bytes2;
        unsigned char bytes3;
        unsigned char bytes4;
    }ip;
    unsigned int num;
};
int main() {
    int a = 0;
    int *p = &a;
    printf("sizeof(p) = %lu", sizeof(p));
    char str[20] = {0};
    int arr[4] = {0};
    while (~scanf("%s", str)) {
        sscanf(str, "%d.%d.%d.%d", &arr[3], &arr[2], &arr[1], &arr[0]);
        union IP p;
        p.ip.bytes1 = arr[0];
        p.ip.bytes2 = arr[1];
        p.ip.bytes3 = arr[2];
        p.ip.bytes4 = arr[3];
        printf("%u\n", p.num);
        if (arr + 1 == &arr[1]) {
            printf("\nYES\n");
        }
    }
    return 0;
}