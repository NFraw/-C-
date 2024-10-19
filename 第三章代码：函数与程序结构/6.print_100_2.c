/*************************************************************************
        > File Name: 6.print_100_2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 06:07:30 PM CST
 ************************************************************************/

#include<stdio.h>
int cnt = 100; 
int main(int n){
    n = cnt;
    cnt--;
    if(n == 1){
        printf("%d\n", n);
        return 0;
    }
    main(n - 1);
    printf("%d\n", n);
}