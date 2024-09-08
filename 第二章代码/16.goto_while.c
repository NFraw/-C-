/*************************************************************************
        > File Name: 16.goto_while.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 08 Sep 2024 09:36:12 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n, i = 1;
    scanf("%d", &n);
judge:
    if(i <= n) goto stmt;
    else goto while_end;
stmt:
    printf("%d ", i);
    i++;
    goto judge;
while_end:
    printf("\n");
    return 0;
}