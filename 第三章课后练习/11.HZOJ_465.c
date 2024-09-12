/*************************************************************************
        > File Name: 11.HZOJ_465.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 07:44:10 PM CST
 ************************************************************************/

#include<stdio.h>

void digit(long long int n, int k);

int main(){
    long long int n; 
    int k;
    scanf("%lld %d", &n, &k);
    digit(n, k);
    return 0;
}

void digit(long long int n, int k){
    int digits;
    for(int i = 0; i < k; i++){
        digits = n % 10;
        n = n / 10;
    }
    printf("%d\n", digits);
    return ;
}