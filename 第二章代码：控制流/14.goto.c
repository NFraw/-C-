/*************************************************************************
        > File Name: 14.goto.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 06 Sep 2024 09:55:58 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    goto lab_1;
    printf("hello world!\n");
    lab_1:                     //直接跳到此处进行输出
    printf("hello chongqing\n");
    return 0;
}