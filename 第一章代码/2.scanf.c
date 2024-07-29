/*************************************************************************
        > File Name: 2.scanf.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sat 20 Jul 2024 08:49:55 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b, n;
    printf("normal scanf, input a, b: ");
    n = scanf("%d%d", &a, &b);            //输入两个值，传入的是a，b的地址
    printf("a = %d, b = %d\n", a, b); //验证输入是否正确
    printf("n = %d\n", n);
    printf("normal scanf, input %%dabc%%d: ");
    n = scanf("%dabc%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("n = %d\n", n);
    
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    n = scanf("%d", &a);
    printf("n = %d\n", n);
    printf("EOF = %d\n", EOF);
}