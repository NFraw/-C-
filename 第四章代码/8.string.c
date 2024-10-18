/*************************************************************************
        > File Name: 8.string.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 16 Sep 2024 02:41:39 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 

int main() {
    srand(time(0));
    char str1[10] = "abc";
    printf("str1 = %s\n", str1);
    strcpy(str1, "def"); 
    printf("str1 = %s\n", str1);
    char str2[] = "hello\0world";
    printf("strlen(str2) = %lu\n", strlen(str2));
    printf("sizeof(str2) = %lu\n", sizeof(str2));
    printf("str2 = %s\n", str2);
    str2[5] = ' ';
    printf("str2 = %s\n", str2);
    char str3[] = "abcdef", str4[] = "abc";
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));
    str3[3] = '\0';
    printf("strcmp(str3, str4) = %d\n", strcmp(str3, str4));

    int arr[10];
    for(int i = 1; i < 10; i++){
        arr[i] = rand() % 100;
    }
       
    for(int i = 1; i < 10; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    memset(&arr[1], 0, sizeof(arr));  //其他两种等价形式 ：40  sizeof(int ) * 10
    for(int i = 1; i < 10; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    return 0;
}