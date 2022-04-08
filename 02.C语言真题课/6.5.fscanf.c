#include <stdio.h>

int main() {
    int a1, a2;
    char str1[30], str2[30];
    FILE *fp = fopen("lagogo", "w+");
    if(fp == NULL) return -1;

    puts("Please input a num and a string :");
    
    scanf("%d%[^#]s", &a1, str1);

    fprintf(fp, "%d%s", a1, str1);

    rewind(fp);
    
    fscanf(fp, "%d%[^#]s", &a2, str2);

    printf("%d %s\n", a2, str2);
    fclose(fp);
    return 0;
}