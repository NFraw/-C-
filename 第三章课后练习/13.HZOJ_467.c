/*************************************************************************
        > File Name: 13.HZOJ_467.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 08:13:22 PM CST
 ************************************************************************/

#include<stdio.h>

long long int function(long long int n);

int main(){
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", function(n));
    return 0;
}

long long int function(long long int n){
    if(n == 1) return 1;
    return n * function(n - 1);
}