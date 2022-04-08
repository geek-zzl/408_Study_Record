/*************************************************************************
	> File Name: 5.3.c
	> Author: 
	> Mail: 
	> Created Time: Wed 06 Apr 2022 07:41:19 PM CST
 ************************************************************************/

#include<stdio.h>

void fun(int *p) { 
    //指针p指向了传递过来的首地址
    printf("\n子函数 : ");
    for (int i = 0; i < 5; i ++){
        (*p)++; // 操作内容
        printf("%d\t", *p++); // 输出修改后的内容
    }

}
int main() {
    int array[5] = {10, 20, 30, 40, 50};
    fun(array);
    printf("\n主函数 : \n");
    for (int i = 0; i < 5; i ++) {
        printf("%d\t", array[i]);
    }
    printf("\n");
    return 0;
}
