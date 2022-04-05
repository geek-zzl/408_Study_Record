#include <stdio.h>
#include <string.h>

int main() {
    /*
    char str[] = {"hello world"};
    char src[] = {'k','a','i','k','e','\0'};
    printf("sizeof(str) = %ld\n", sizeof(str));
    printf("sizeof(src) = %lu\n", sizeof(src));
    printf("str = %s\n",str);
    printf("src = %s\n",src);
    */
    char str[100] = "192@168@0@1";
    int arr[4] = {0};
    sscanf(str, "%d@%d@%d@%d",&arr[0], &arr[1], &arr[2], &arr[3]);
    for (int i = 0; i < 4 ; i ++) {
        i && printf(".");
        printf("%d",arr[i]);
    }
    puts(" ");
    return 0;

} 