/*************************************************************************
        > File Name: 14.HZOJ_468.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 08:58:15 PM CST
 ************************************************************************/

#include<stdio.h>

int func(int n,int m);

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", func(n, m));
    return 0;
}

int func(int n, int m){
    if(n == 0) return m;
    func(m % n, n);
}