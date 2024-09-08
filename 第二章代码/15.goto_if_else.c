/*************************************************************************
        > File Name: 15.goto_if_else.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 08 Sep 2024 09:12:19 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    n % 2 == 0 && ({goto if_stmt; 1;});
    !(n % 2 == 0) && ({goto else_stmt; 1;});
if_stmt:
    printf("%d is even \n", n);
    goto if_end;
else_stmt:
    printf("%d is odd \n", n);
if_end:
    return 0;
}