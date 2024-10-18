/*************************************************************************
        > File Name: 14.HZOJ_147.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 18 Sep 2024 10:16:39 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

char s[10005];

int main() {
    scanf("%s", s);    
    if(s[strlen(s) - 1] % 2) {
        printf("NO\n");
    }
    else printf("YES\n");
    return 0;
}