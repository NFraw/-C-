/*************************************************************************
        > File Name: 29.const.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 17 Oct 2024 11:03:26 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    const int a = 123;
    const int b = 465;
    const int *p1 = &a;             
    //对于指针本身的定义要在 * 号之后，*号之前的内容是对指针所指向的地址的数据类型的定义
    printf("*p1 =%d\n", *p1);
    p1 = &b;
    printf("*p1 =%d\n", *p1);
    int const *p2  = &a;
    int n = 789, m = 1000;
    int *const p3 = &n;
    //p3 = &m;   在此处的p3是不能被改变的
    return 0;
}