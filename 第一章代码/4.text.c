/*************************************************************************
        > File Name: 5.string.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 21 Jul 2024 10:06:25 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char t[10];
    for(int i = 0; i < 10 ; i++) t[i] = -1;
    scanf("%s", t);
    for(int i = 0; i < 10; i++){
        printf("%d ", t[i]);
    }
    printf("\n");
    char s[100] = "Hello World"; 
    printf("%s\n", s);
    scanf("%[^\n]", s);
    int n;
    n = printf("%s", s);
    printf(" has %d digit(s)\n", n);
    return 0;
}