/*************************************************************************
        > File Name: 6.text3.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 21 Jul 2024 04:15:27 PM CST
 ************************************************************************/

#include<stdio.h>

int main(){
    char s[100], t[104];
    scanf("%[^\n]", s);
    printf("s = %s\n", s);
    int n;
    n = sprintf(t,"| %s |", s);    
    /********************************************************************
    此处有报错主要是因为当数组s写满时加上空格和|t数组中的内存大小就超过了
    100，因此，t的内存空间应当比s要大至少4
    *********************************************************************/
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");
    printf("%s\n", t);
    for(int i = 0; i < n; i++) printf("-");
    printf("\n");
    return 0;
}