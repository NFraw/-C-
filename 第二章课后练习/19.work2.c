/*************************************************************************
        > File Name: 19.work2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 08 Sep 2024 09:04:09 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    if(n % 7 == 0 && !(n % 2 == 0)) printf("YES\n");
    else printf("NO\n");
    return 0;
}