/*************************************************************************
        > File Name: 2.hex.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sat 14 Sep 2024 11:28:06 AM CST
 ************************************************************************/

//hex通常用于对十六进制的缩写
//占位符的大小写是与十六进制字符中英文的大小写有关
#include<stdio.h>
int main (){
    int a = 0x61a;
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    int max_int = 0x7fffffff;
    int min_int = 0x80000000;
    printf("MAX_INT = %d\n", max_int);
    printf("MIN_INT = %d\n", min_int);
    scanf("%x", &a);                         //如果要在scanf里面添加东西，那么就变成了格式化输入了
    printf("a(10) = %d\n", a);
    printf("a(16) = %x\n", a);
    printf("a(16) = %X\n", a);
    return 0;
}