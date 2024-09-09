/*************************************************************************
        > File Name: 30.work_HX_7.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Mon 09 Sep 2024 03:52:08 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    char ch = 'A' + n;                                 //中心字母
    for(int i = 0; i < 2 * n + 1; i++){                //行数
        int a_num = n - abs(i - n);                    //空格数
        //int b_num = 2 * (2 * n - (a_num + 1)) - 1;   //字符数
        int b_num = 2 * abs(i - n) + 1;                //船长的字符数算法
        for(int j = 0; j < a_num; j++) printf(" ");    //输出空格
        for(int j = 0; j < b_num; j++){                //输出行间轴对称的字母
            //int c_num = n - abs(j - n);
            printf("%c",ch - abs(j - b_num / 2));
        }
        //printf("%d %d\n", a_num, b_num);             //检验空格数和字符数是否正确
        printf("\n");
    }
    return 0;
}