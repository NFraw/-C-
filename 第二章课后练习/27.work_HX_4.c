/*************************************************************************
        > File Name: 27.work_HX_4.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 11:37:19 AM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int sum = 0, m = 0, n = 0;
    scanf("%d", &n);
    m = n;
    for(int i = 0; i < m; i++){
        for(int x = 0; x < n; x++){
            printf("%c", 'A'+sum);
            sum++;
        }
        printf("\n");
        n--;
    }
    return 0;
}