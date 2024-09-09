/*************************************************************************
        > File Name: 24.work_XH_1.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 10:49:24 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int sum = 0;
    int m[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &m[i]);
    }
    for(int i = 0; i < n; i++){
        sum = sum + m[i];
    }
    double ave = (double)sum;
    ave = ave / n;
    printf("%.2f\n", ave);
    return 0;
}