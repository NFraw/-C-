/*************************************************************************
        > File Name: 10.HZOJ_464.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 07:31:41 PM CST
 ************************************************************************/

#include<stdio.h>

void count(int x, int y);


int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    count(x, y);
    return 0;
}

void count(int x, int y){
    int count = 0;
    for(int i = x; i <= y; i++){
        if(i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
            count++;
        }
    }
    printf("%d\n", count);
    return ;
}