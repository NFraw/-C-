/*************************************************************************
        > File Name: 6.print_100.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 06:02:57 PM CST
 ************************************************************************/

#include<stdio.h>

void print(int n){
    if(n == 1){
        printf("%d\n", n);
        return ;                  //退出自定义函数
    }
    print(n - 1);
    printf("%d\n", n);
}

int main(){
    print(100);
    return 0;
}