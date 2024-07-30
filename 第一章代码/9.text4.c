/*************************************************************************
        > File Name: 9.text4.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 29 Jul 2024 09:15:13 PM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int main(){
    double x;
    scanf("%lf", &x);
    printf("%lf^%lf = %lf\n", x, 1.0/3.0, pow(x, 1.0/3.0 ));
    //如果此处是1/3，那么结果就是0.33，向零取整则是0，任何数0次方都是1
    return 0;
}