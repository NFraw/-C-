/*************************************************************************
        > File Name: 7.max_int.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 10:07:30 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int max_int(int n, ...){            //这个变参函数的功能是从变参列表中选出最大值
    va_list args;                   //存储变参列表中的数据
    va_start(args, n);              //初始化参数列表，规定这个数据从列表前n这个值开始
    int ans = INT32_MIN;            //ans规定为最小值，包含头文件<inttypes.h>
    for(int i = 0; i < n; i++){     //循环取最大值
        int a = va_arg(args, int);  //取出每个值，前一个参数是这个参数列表，后一个参数是参数列表的数据类型
        if(a > ans) ans = a;
    }
    va_end(args);                   //把变参列表关闭掉
    return ans;                     //返回最大值ans
}
int main(){
    printf("max_int(3, 8, 7, 9) = %d\n", max_int(3, 8, 7, 9));
    printf("max_int(2, 8, 7, 9) = %d\n", max_int(2, 8, 7, 9));  //第一个参数确定后面的变参列表的参数数量
    //printf("max_int(3, 8, 7, 9) = %d\n", max_int(3, 8, 7, 9));
    //printf("max_int(3, 8, 7, 9) = %d\n", max_int(3, 8, 7, 9));
    return 0;
}