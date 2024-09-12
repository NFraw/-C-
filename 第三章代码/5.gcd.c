/*************************************************************************
        > File Name: 5.gcd.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 05:23:39 PM CST
 ************************************************************************/

#include<stdio.h>

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x % y);
}
int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        printf("gcd(%d, %d) = %d\n",a, b, gcd(a, b));
    }
    return 0;
}