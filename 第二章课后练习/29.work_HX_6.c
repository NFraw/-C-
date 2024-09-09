/*************************************************************************
        > File Name: 29.work_HX_6.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 03:51:33 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    char ch = 'A';
    for(int i = 0; i < 2 * n - 1; i++){
        int a_num = 2 * n - 2 * abs(i - n + 1) - 1;  //字符
        int b_num = abs(i - n + 1);                  //空格
        int c_num = (2 * n - 2 * abs(i - n + 1)) / 2 - 1; 
        for(int j = 0; j < b_num; j++) printf(" ");
        for(int j = 0; j < a_num; j++) printf("%c", ch + c_num);
        printf("\n");
    }
    return 0;
}