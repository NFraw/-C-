/*************************************************************************
        > File Name: 4.f_function.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 04:40:12 PM CST
 ************************************************************************/

#include<stdio.h>
int f(int n){
    printf("in f(%d)\n", n);
    int ret;
    if(n == 1) ret = 1;
    else ret = n * f(n - 1);        //没有开始回溯时，此处都会调用f()函数，因此不会执行下面的out f()
    printf("out f(%d)\n", n);       //每次回溯时，都会执行这条语句
    return ret;
}
int main(){
    int n;
    while(~scanf("%d", &n)){
        printf("f(%d) = %d\n", n, f(n));
    }
    return 0;
}