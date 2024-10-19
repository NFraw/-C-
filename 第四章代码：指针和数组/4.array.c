/*************************************************************************
        > File Name: 4.array.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sat 14 Sep 2024 05:17:32 PM CST
 ************************************************************************/

#include<stdio.h>

void test1(){
     int a[10];  //数组下标从0到n - 1
    for(int i = 0; i < 10; i++){
        a[i] = 2 * i;
    }
    for(int i = 0; i < 10; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    //printf("\n") 
    return ;
}

void test2(){
    int n;
    printf("input n: ");
    scanf("%d", &n);
    int a[2 * n];
    for(int i = 0; i < 2 * n; i++){
        a[i] = 2 * i;
    }
    for(int i = 0; i < 2 * n; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test3(){   //将数组中的所有值存储为0
    int a[5];
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}

void test4(){   //将数组中的值存储为12345
    int a[5] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 5; i++){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return ;
}
void test5() {
    int a[] = {1, 2, 3, 4, 5, 6,7};
    size_t size =  sizeof(a) / sizeof(int);
    printf("sizeof(a) / sizeof(int) = %lu\n", size);
    printf("a = %p\n", a);
    printf("a[0] = %p\n", &a[0]);
    for(int i = 0; i <size; i++){
        printf("a[%d] = %p\n", i, &a[i]);
    }
    return ;
}
int main(){
    //test1();
    //定长数组
    //test2();
    //可变长数组
    //test3();
    //初始化数组
    //test4();
    test5();
    return 0;
}