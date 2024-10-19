/*************************************************************************
        > File Name: 3.if_else1.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 08 Aug 2024 12:00:16 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("HEHE\n");
    }
    else if(n < 60){
        printf("FALL\n");
    }
    else if(n < 75){
        printf("MEDIUM\n");
    }
    else{
        printf("GOOD\n");
    }   
    return 0;
}