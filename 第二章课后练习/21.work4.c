/*************************************************************************
        > File Name: 21.work4.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 09:00:51 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char n;
    scanf("%c", &n);
    switch(n){
        case 'h':
            printf("He\n");
            break;
        case 'l':
            printf("Li\n");
            break;
        case 'c':
            printf("Cao\n");
            break;
        case 'd':
            printf("Duan\n");
            break;
        case 'w':
            printf("Wang\n");
            break;
        default:
            printf("Not Here\n");
            break;
    }
    return 0;
}