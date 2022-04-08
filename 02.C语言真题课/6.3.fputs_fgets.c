#include <stdio.h>

char str1[100];
char str2[100];

int main() {
    FILE *fp = fopen("lagogo", "w+");
    if (fp == NULL)
        printf("Error\n");
    else
        printf("Open_Success\n");
    
    puts("Please input string: ");
    scanf("%[^#]s",str1);
    fputs(str1, fp);

    rewind(fp);

    fgets(str2, 5, fp);
    puts(str2);
    fclose(fp);
    return 0;
}