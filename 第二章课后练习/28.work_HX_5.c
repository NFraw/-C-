/*************************************************************************
        > File Name: 28.work_HX_5.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 03:38:06 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < 2 * n - 1; i++){
        int a_num = 2 * n - 2 * abs(i - n + 1);  //字符A
        int b_num = abs(i - n + 1);              //空格
        for(int j = 0; j < b_num; j++) printf(" ");
        for(int j = 0; j < a_num; j++) printf("A");
        printf("\n");
    }
    return 0;
}