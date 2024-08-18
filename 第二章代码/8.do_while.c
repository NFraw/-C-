/*************************************************************************
        > File Name: 8.do_while.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 18 Aug 2024 07:24:35 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    int i = 0;
    scanf("%d", &n);
    do{
        i++;
        n = n / 10;   //此处可以用n /= 10，实现结果与前面的代码无异
    }while(n);        //此处可以用n直接作为while语句的条件，原因是最后n为零的时候，在条件判断中就是为假
    printf("digits : %d\n", i);
    return 0;
}