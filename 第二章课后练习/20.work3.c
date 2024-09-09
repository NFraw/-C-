/*************************************************************************
        > File Name: 20.work3.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 08 Sep 2024 09:18:58 PM CST
 ************************************************************************/

#include<stdio.h>
//#include<math.h>
int main(){
    char n;
    float a, b;
    double c;
    scanf("%c", &n);
    scanf("%f%f", &a, &b);
    if(n == 'r'){
        c = a * b;
        //c = ceil(c);   
        printf("%.2f\n", c);
    }
    else if(n == 't'){
        c = (a * b) / 2;
        //c = ceil(c);   此处用不到这个进一法，直接在个位进行进一
        printf("%.2f\n", c);
    }
    return 0;
}