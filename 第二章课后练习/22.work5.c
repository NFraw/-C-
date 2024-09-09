/*************************************************************************
        > File Name: 22.work5.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 09:42:33 AM CST
 ************************************************************************/

#include<stdio.h>
//#include<stdlib.h>
int main(){
    int year, n;
    scanf("%d", &year);
    year = year - 1900;
    if(year < 0) n = year % 12 + 13; 
    else n = year % 12 + 1;
    switch(n){
        case 1:
            printf("rat\n");
            break;
        case 2:
            printf("ox\n");
            break;
        case 3:
            printf("tiger\n");
            break;
        case 4:
            printf("rabbit\n");
            break;
        case 5:
            printf("dragon\n");
            break;
        case 6:
            printf("snake\n");
            break;
        case 7:
            printf("horse\n");
            break;
        case 8:
            printf("sheep\n");
            break;
        case 9:
            printf("monkey\n");
            break;
        case 10:
            printf("rooster\n");
            break;
        case 11:
            printf("dog\n");
            break;
        case 12:
            printf("pig\n");
            break;
    }
    return 0;
}