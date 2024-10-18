/*************************************************************************
        > File Name: 10.HZOJ_144.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Tue 17 Sep 2024 11:45:40 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
int main(){
    char str[135];
    scanf("%s", str);
    int cnt = 0;
    for(int i = 0, n = strlen(str); i < n; i++){
        if(str[i] == 'A') cnt += 1;
    }
    printf("%d\n", cnt);
    return 0;
}