/*************************************************************************
        > File Name: 20.function_with_pointer.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Thu 26 Sep 2024 08:24:33 PM CST
 ************************************************************************/

#include<stdio.h>

//指针的第一个作用，修改传入参数的值
void add_one(int * p){
    *p += 1;
    return ;
}


//指针的第二个作用，接受传出参数
void f(int n, int * sum){
    *sum = (1 + n) * n / 2;
    /*for(int i = 0; i < n; i++){   //在此处的大小关系为逻辑关系
        *sum += i + 1;            //函数内部的实现是物理关系
    }*/
    return ;
}


//指针的第三个作用，接受数组参数
void output(int *p, int n) {
    for(int i = 0; i < n; i++){
        printf("arr[%d] = %d\n", i, p[i]);
    }
    return ;
}
int main () {
    int a = 123;
    printf("a = %d\n", a);
    add_one(&a);
    printf("a = %d\n", a);
    int n = 10, sum = 0;
    f(n, &sum);
    printf("sum = %d\n", sum);
    int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    output(arr, 10);
    return 0; 
}