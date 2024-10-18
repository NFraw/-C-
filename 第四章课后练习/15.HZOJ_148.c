/*************************************************************************
        > File Name: 15.HZOJ_148.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 18 Sep 2024 10:22:27 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char s[55];
    scanf("%s", s);
    for(int i = 0, j = strlen(s) - 1; i < j; i++, j--){
        /*char ch;
        ch = s[i];
        s[i] = s[j];
        s[j] = ch;*/
        s[i] ^= s[j];
        s[j] ^= s[i];
        s[i] ^= s[j];
    }
    printf("%s\n", s);
    return 0;
}