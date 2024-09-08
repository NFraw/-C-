/*************************************************************************
        > File Name: 11.f.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 06 Sep 2024 07:06:41 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int f0 = 1;
    int f1 = 1;
    int final = f1;
    int n = f0;
    for(int i = 1; i <= 20; i++){
        int v = final;
        final = n + final; 
        n = v;
        printf("%d ", final);
    } 
    printf("\n");
    return 0;
}