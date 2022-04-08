/*************************************************************************
	> File Name: 6.2.file.c
	> Author: 
	> Mail: 
	> Created Time: Fri 08 Apr 2022 08:04:10 PM CST
    > Usage: 单字符的读和写
 ************************************************************************/

#include<stdio.h>

int main() {
    FILE *fp = fopen("lagogo", "w+");
    if (fp == NULL) {
        printf("1\n");
        return 0;
    }
    else
        printf("2\n");
    /*fputc('a', fp);
    rewind(fp);
    putchar(fgetc(fp));*/
    // 随机输入一个字符串写入文件, 在读出输出到显示器
    puts("请输入字符串, 以#字符结束: ");
    char ch = getchar(); // 键盘到内存
    while(ch != '#') {
        fputc(ch, fp); // 内存到文件
        ch = getchar();
    }

    rewind(fp); // 文件位置指针回归到文件开始位置

    ch = fgetc(fp);
    while(ch != EOF) {
        putchar(ch);
        ch = fgetc(fp);
    }
    puts("");
    fclose(fp);
    return 0;
}
