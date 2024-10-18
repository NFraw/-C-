/*************************************************************************
        > File Name: 24.pointer_get_value.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 13 Oct 2024 03:12:59 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a = 0x61626364;
    char *n = (char *)&a;                    //强制类型转换
    printf("(n + 0) = %c\n", *(n + 0));
    printf("(n + 1) = %c\n", *(n + 1));
    printf("(n + 2) = %c\n", *(n + 2));
    printf("(n + 3) = %c\n", *(n + 3));
    printf("\n");
    printf("n[0] = %c\n", n[0]);
    printf("n[1] = %c\n", n[1]);
    printf("n[2] = %c\n", n[2]);
    printf("n[3] = %c\n", n[3]);
    return 0;
}