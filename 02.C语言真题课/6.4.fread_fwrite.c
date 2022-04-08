// fread(buffer, size, count, fp);
// fwrite(buffer, size, count, fp);

#include <stdio.h>

struct stu {
    int num;
    char name[20];
}s1[2], s2[2];

int main() {
    FILE *fp = fopen("lagogo", "w+");
    if(fp == NULL) return -1;

    puts("Please input stu info :");
    for (int i =0; i < 2; i ++)
        scanf("%d%s", &s1[i].num, s1[i].name);
    
    fwrite(s1, sizeof(s1), 1, fp);
    rewind(fp);
    fread(s2, sizeof(struct stu), 2, fp);
    
    for (int i= 0; i < 2; i ++)
        printf("%d %s\n", s2[i].num, s2[i].name);

    fclose(fp);
    return 0;
}