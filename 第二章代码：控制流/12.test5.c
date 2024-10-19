/*************************************************************************
        > File Name: 12.test5.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 06 Sep 2024 08:51:19 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a = 1,  b = 1, c;
    for(int i = 1; i <= 20; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    for(int i = 1, f1 = 1, f2 = 1; i <= 20; i++, f2 += f1, f1 = f2 - f1){
        printf("%d ", f1);
    } 
    printf("\n");
    return 0;
}