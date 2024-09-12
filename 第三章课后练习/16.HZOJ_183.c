/*************************************************************************
        > File Name: 16.HZOJ_183.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 12 Sep 2024 09:20:21 PM CST
 ************************************************************************/

#include <stdio.h>

int f(int x);

int main(){
    int x;
    scanf("%d", &x);
    printf("%d\n", f(x));
    return 0;
}
int f(int x){
    if(x <= 0) return 0;
    else if(x == 1) return 1;
    else if(x > 1 && x % 2 == 0) return 3 * f(x / 2) - 1;
    else if(x > 1 && x % 2 == 1) return 3 * f((x + 1) / 2) - 1; 
}