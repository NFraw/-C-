/*************************************************************************
        > File Name: 26.work_HX_3.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 11:30:16 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 7 == 0) printf("%d\n", i);
    }
    return 0;
}