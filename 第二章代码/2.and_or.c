/*************************************************************************
        > File Name: 2.and_or.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 08 Aug 2024 07:21:33 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    a < b && printf("YES\n");         //此处将printf() 看作数值，当他不为零的时候，及判别为真
    !(a < b) && printf("NO\n");       //同理
    return 0;
}