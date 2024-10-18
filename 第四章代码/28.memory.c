/*************************************************************************
        > File Name: 28.memory.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 16 Oct 2024 04:14:43 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    /*int * arr = (int *)malloc(sizeof(int) * 10); 
    //传入的申请空间的字节数长度,提高代码的可移植性
    //也运用了强制类型转化
    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    for(int i = 0; i < 10; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }*/
    int *arr1 = malloc(sizeof(int) * 10);
    for(int i= 0; i < 10; i++) {
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }
    int *arr2 = calloc(10, sizeof(int));
    for(int i= 0; i < 10; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }
    free(arr1);
    free(arr2);

    char s1[90] = {"Hello World!"};
    char s2[100];
    char s3[100];

    memcpy(s2, s1, sizeof(s1));
    memmove(s3, s1, sizeof(s1));

    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    
    memcpy(s2 + 4, s2, 12);
    memmove(s3 + 4, s3, 12); 
    
    printf("s2 = %s\n", s2);
    printf("s3 = %s\n", s3);
    return 0;
}