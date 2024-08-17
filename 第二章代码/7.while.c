/*************************************************************************
        > File Name: 7.while.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sat 17 Aug 2024 10:49:33 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    //1 - n
    int n;
    int i = 1;
    scanf("%d", &n);
    while(i <= n){
        printf("%d", i);
        i++;
    }
    printf("\n");
    return 0;
}