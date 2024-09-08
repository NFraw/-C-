/*************************************************************************
        > File Name: 17.goto_for.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 08 Sep 2024 10:56:07 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
for_1:
    goto for_2;
for_2:
    if(i <= n) goto for_4;   //判断条件
    else goto for_end;
for_3:
    i++;
    goto for_2;              //常规的for语句中的最后处的一个操作i++
for_4:
    if(i % 3 == 0) goto for_3;
    else printf("%d ", i);
    goto for_3;              //打印后进入下一步，此处是对数字是否可以被3整除的判断
for_end:
    printf("\n");
    return 0;
}