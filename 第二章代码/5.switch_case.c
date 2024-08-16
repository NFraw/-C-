/*************************************************************************
        > File Name: 5.switch_case.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 16 Aug 2024 08:42:25 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch(a){
        case 1:printf("a = 1\n"); break;
        case 2:printf("a = 2\n"); break;
        case 3:printf("a = 3\n"); break;
        case 4:printf("a = 4\n"); break;
        default:printf("default value\n"); break;
    }
    return 0;
}