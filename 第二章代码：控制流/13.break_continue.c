/*************************************************************************
        > File Name: 13.break_continue.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 06 Sep 2024 09:32:01 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d ", i);
        if(i == 8) break;
    }
    printf("\n");
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}