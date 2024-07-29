/*************************************************************************
        > File Name: 5.sscanf.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 21 Jul 2024 03:59:02 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    char s[100] = "192.168.1.245";
    int a, b, c, d;
    sscanf(s, "%d.%d.%d.%d", &a, &b, &c, &d);  //格式化读入
    sprintf(s, "%d:%d:%d:%d\n", a, b, c, d);   //更改IP地址中的点为冒号
    printf("%s", s);
    return 0;
}