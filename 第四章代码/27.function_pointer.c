/*************************************************************************
        > File Name: 27.function_pointer.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Tue 15 Oct 2024 09:05:46 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void test1() {
    printf("function test1\n");
    return ;
}

void test2() {
    printf("function test2\n");
    return ;
}

void test3() {
    printf("function test3\n");
    return ;
}
void (*p)();



int main() {
    srand(time(0));
    p = test1;
    p();
    p = test2;
    p();
    p = test3;
    p();
    /*switch (rand() % 3){
        case 0: test1:break;
        case 1: test2:break;
        case 2: test3:break;
    }*/
    void (*arr[3])() = {test1, test2, test3}; 
    //函数指针数组，此处定义的*arr[3]代表的是他存有三个函数的首地址，后续求某个函数的时候可以直接用下标进行访问
    for(int i = 0; i < 3; i++) {
        arr[rand() % 3]();                   
    }
    return 0;
}