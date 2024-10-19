/*************************************************************************
        > File Name: 6.test3.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 16 Aug 2024 09:13:01 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    switch(n){
        case 1:printf("one ");
        case 2:printf("two ");
        case 3:printf("three \n");break;
        default:printf("error\n");break;
    }
    return 0;
}