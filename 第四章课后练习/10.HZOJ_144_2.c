/*************************************************************************
        > File Name: 10.HZOJ_144_2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Tue 17 Sep 2024 11:57:19 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main() {
    char str[105];
    scanf("%s", str);  //str本身就是一指针，返回的就是地址，因此没有必要加上取地址符
    int cnt = 0;
    for(int i = 0; str[i]; i++){
        cnt += (str[i] == 'A');
    }
    printf("%d\n", cnt);
    return 0;
}