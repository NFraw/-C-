/*************************************************************************
        > File Name: 1.printf.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sat 20 Jul 2024 07:40:37 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n1, n2;            //作为两个字符串的返回值  
    n1 =printf("Hello World!\n");
    printf("%d\n", '\n');  //输出换行符的ASCII码值
    int a = 123;
    n2 = printf("Hello World = %d", a); 
    printf("\nn1 = %d\nn2 = %d", n1, n2);//输出两个字符串里面的字符数量 
    return 0;
}