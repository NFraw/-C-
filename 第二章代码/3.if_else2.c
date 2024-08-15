/*************************************************************************
        > File Name: 3.if_else2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 08 Aug 2024 12:21:44 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n == 0)printf("HEHE\n");
    if(n > 0 && n < 60)printf("FALL\n");
    if(n >= 60 && n < 75)printf("MEDIUM\n");
    if(n > 75)printf("GOOD\n");
    return 0;
}