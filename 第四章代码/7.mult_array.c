/*************************************************************************
        > File Name: 7.mult_array.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 16 Sep 2024 10:19:35 AM CST
 ************************************************************************/

#include<stdio.h>
int main() {
    int b[3][4] = {0}, cnt = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0;  j < 4; j++){
            b[i][j] = cnt;
            cnt++;
        }
    } 
    for(int i = 0; i < 3; i++){
        for(int j = 0;  j < 4; j++){
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 4 * sizeof(b[3][0]); i++){
        printf("-");
    }
    printf("\n");
    cnt = 1;
    for(int i = 0; i < 4; i++){
        for(int j = 0;  j < 3; j++){
            b[j][i] = cnt;
            cnt++;
        }
    } 
    for(int i = 0; i < 3; i++){
        for(int j = 0;  j < 4; j++){
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}