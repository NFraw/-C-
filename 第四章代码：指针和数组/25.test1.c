/*************************************************************************
        > File Name: 25.test1.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 13 Oct 2024 03:51:40 PM CST
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);
    unsigned int n = 0;
    char *p = (char *)&n;
    p[0] = d;
    printf("%u\n", n);
    p[1] = c;
    printf("%u\n", n);
    p[2] = b;
    printf("%u\n", n);
    p[3] = a;
    printf("%u\n", n);

    return 0;
}