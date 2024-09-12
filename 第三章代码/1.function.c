/*************************************************************************
        > File Name: 1.function.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Wed 11 Sep 2024 08:32:43 AM CST
 ************************************************************************/

#include<stdio.h>
#include<math.h>
int sum(int a, int b){
    return a + b;
}


double select_function(int  flag, double x){
    /*if(flag == 1) return sqrt(x);
    else if(flag == 2) return x * x;
    else printf("wrong input!");*/
    switch(flag){
        case 1 : 
            return sqrt(x);
            break;
        case 2 : 
            return x * x;
            break;
        default : 
            printf("wrong flag!\n");
            break;
    }
    return 0;
}

void printf_helloworld(int n){
    for(int i = 0; i < n; i++){
        printf("hello world!\n");
    }
    return ;
}

int main(){
    printf("3 + 4 = %d\n", sum(3, 4));
    printf("sqrt(3) = %lf\n",select_function(1, 3.0));
    printf("4 * 4 = %lf\n",select_function(2, 4.0));
    printf_helloworld(3);
    printf("-----------------\n");
    printf_helloworld(5);
    return 0;
}