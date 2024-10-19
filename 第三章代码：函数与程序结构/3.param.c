/*************************************************************************
        > File Name: 3.param.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 09:50:57 AM CST
 ************************************************************************/

//形参所有的修改都不会改变实参的值

#include<stdio.h>

void test(int a, int b){
    a += 1;
    b *= 2;
    printf("test a = %d, test b = %d\n", a, b);
    return ;
}
int main(){
    int a = 1, b = 2;
    test(a, b);
    printf("real a = %d, real b = %d\n", a, b);
    return 0;
}