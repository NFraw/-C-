/*************************************************************************
        > File Name: 25.work_HX_2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 11:17:46 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n = 0;
    double sum, m = 0.0;
    scanf("%lf%d", &m, &n);
    sum = m;
    for(int i = 0; i < n; i++){
        sum = sum * (1 + 0.00417);
        sum = m + sum;
    }
    sum = sum - m;
    printf("$%.2f\n", sum);
    return 0;
}