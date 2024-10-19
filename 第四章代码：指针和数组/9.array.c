/*************************************************************************
        > File Name: 9.array.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 23 Sep 2024 06:51:35 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a[10];
    int n = sizeof(int);
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %p\n", i + 1, &a[i]);
    }


    return 0;
}