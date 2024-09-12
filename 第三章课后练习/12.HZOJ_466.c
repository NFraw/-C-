/*************************************************************************
        > File Name: 12.HZOJ_466.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 07:52:53 PM CST
 ************************************************************************/

#include<stdio.h>

void function(int n);

int main(){
    int n;
    scanf("%d", &n);
    function(n);
    return 0; 
}
void function(int n){
    int x = 0, y;
    int count = 0;
    for(int i = 1; i <= n; i++){
        y = i;
        x = 0;                     //x需要在每次判断后清零，这样才能再一次进入循环进行受值判断
        while(y){
            x = x * 10 + y % 10;   //此处的x如若不是为零的话，他将一直累积
            y = y / 10;             
            if(x == i) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return ;
}