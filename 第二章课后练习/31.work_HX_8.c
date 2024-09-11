/*************************************************************************
        > File Name: 31.work_HX_8.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 03:52:46 PM CST
 ************************************************************************/

#include<stdio.h>
int main(){
    int a, b, c = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){                         //读入两个数据，从小的遍历到大的数
        int flag = 1;                                    //此处flag为真，i为素数；为假，i不为素数
        for(int j = 2; j * j <= i && flag; j++){         //判断素数的循环
            if(i % j) continue;                          //此处，若i%j有余，则此时i还是素数
            flag = 0;                                    //设置条件为真
        }
        if(flag == 1){
            int x = i, y = 0;
            while(x){
                y = y * 10 + x % 10;
                x /= 10;
            }
            if(y != i) continue;
            if(c) printf(" ");
            c += printf("%d", i);             //有值时printf才有返回值（不为一）
        }
    }
    return 0;
}