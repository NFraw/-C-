/*************************************************************************
        > File Name: 8.main_2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 10:39:43 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){           //argc是命令行中参数的个数
    if(strcmp(argv[0], "./bilibili") != 0){     //输入与预期不同时 
        printf("wrong call, please call: ./bilibili\n");
        return 0;
    }
    printf("right call\n");
    printf("argc = %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}