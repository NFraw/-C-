/*************************************************************************
        > File Name: 15.HZOJ_185.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 09:04:59 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int n);

int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", func(n));
    return 0;
}

int func(int n){
    if(n == 1 || n == 2) return 1;
    return func(n - 1) + func(n - 2);
}