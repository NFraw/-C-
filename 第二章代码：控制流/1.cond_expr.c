/*************************************************************************
        > File Name: 1.cond_expr.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 07 Aug 2024 06:05:34 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    printf("a == b = (%d)\n",     a == b);
    printf("a != b = (%d)\n",     a != b);
    printf("a < b = (%d)\n",      a < b);
    printf("a > b = (%d)\n",      a > b);
    printf("a <= b = (%d)\n",     a <= b);
    printf("a >= b = (%d)\n",     a >= b);
    printf("!(a == b) = (%d)\n", !(a == b));
    a += (a == b);                         //当a等于b的时候，a==b的值为1，于是完成了当a==b的时候给a加一的效果
    printf("a = %d\n", a);
    printf("a < b && a  < 3 = (%d)\n", a < b && a < 3);  //两个表达式都为真的时候，真值为1 
    printf("a < b || a  < 3 = (%d)\n", a < b || a < 3);  //其中一个表达式为真的时候，真值为1
    printf("1 && 1 = (%d)\n", 1 && 1);
    printf("1 && 0 = (%d)\n", 1 && 0);
    printf("0 && 1 = (%d)\n", 0 && 1);
    printf("0 && 0 = (%d)\n", 0 && 0);

    printf("1 || 1 = (%d)\n", 1 || 1);
    printf("1 || 0 = (%d)\n", 1 || 0);
    printf("0 || 1 = (%d)\n", 0 || 1);
    printf("0 || 0 = (%d)\n", 0 || 0);
    return 0;
}