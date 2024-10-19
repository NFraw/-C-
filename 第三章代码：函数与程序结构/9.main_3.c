/*************************************************************************
        > File Name: 8.main_2.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 10:39:43 PM CST
 ************************************************************************/
//环境变量的相关使用，可以限定程序的使用
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[], char **env){
    int flag = 0;
    for(char **p = env; p[0]; p += 1){
        if(strcmp(p[0], "LOGNAME=ubuntu") == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("error log name, please use ubuntu\n");
        return 0;
    }
    printf("argc = %d\n", argc);
    for(int i = 0; i < argc; i++){
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return 0;
}