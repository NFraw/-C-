/*************************************************************************
        > File Name: 30.typedef.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 18 Oct 2024 01:21:49 PM CST
 ************************************************************************/

#include<stdio.h>

typedef long long LL;
typedef int (*Arr2Dim10)[10];    //将数组指针变量 写成 数据类型
typedef void (*Func)();


void test() {
    printf("hello function pointer\n");
    return ;
}
int main() {
    LL a;
    printf("sizeof(a) = %ld\n", sizeof(a));
    int arr[5][10];
    Arr2Dim10 p = arr;
    Func p2 = test;
    p2();
    return 0;
}