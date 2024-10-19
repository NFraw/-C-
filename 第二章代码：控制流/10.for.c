/*************************************************************************
        > File Name: 10.for.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 21 Aug 2024 06:44:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
    }
    printf("\n");
    for(int i = 1; ; i++){
        printf("%d ", i);
        if(n == i) break;
    }
    printf("\n");
    return 0;
}