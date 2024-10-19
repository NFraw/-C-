/*************************************************************************
        > File Name: 3.address_len.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sat 14 Sep 2024 04:49:26 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    double b;
    char c;
    printf("sizeof(int &) = %lu\n", sizeof(&a));
    printf("sizeof(double &) = %lu\n", sizeof(&b));
    printf("sizeof(char &) = %lu\n", sizeof(&c));

    return 0;
}