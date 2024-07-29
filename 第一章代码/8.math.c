/*************************************************************************
        > File Name: 8.math.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 28 Jul 2024 09:54:07 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//以下的函数的头文件，无特殊说明都是math.h
int main(){
    printf("pow(2, 3) = %lf\n", pow(2.0, 3.0));  //三个参数都是double数据类型，注意
    printf("sqrt(2) = %lf\n", sqrt(2));  //返回值为double数据类型
    printf("ceil(4.01) = %lf\n", ceil(4.01));  //返回值为double数据类型
    printf("floor(4.99) = %lf\n", floor(4.99));  //返回值为double数据类型
    printf("abs(-65.1) = %d\n", abs(-65.1));  //返回值为int数据类型,头文件为stdlib.h
    printf("fabs(-65.6) = %lf\n", fabs(-65.6));  //返回值为double数据类型
    printf("acos(-1) = %lf\n", acos(-1));  //返回值为π的较精确值
    return 0;
}