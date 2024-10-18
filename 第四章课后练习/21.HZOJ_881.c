/*************************************************************************
        > File Name: 21.HZOJ_881.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 30 Sep 2024 10:37:33 AM CST
 ************************************************************************/

#include<stdio.h>

void swap(int *a, int *b);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
} 
void swap(int *a, int *b) {
    /**a ^= *b;
    *b ^= *a;
    *a ^= *b;*/
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return ;
}