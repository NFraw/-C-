/*************************************************************************
        > File Name: 1.qsort.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Fri 18 Oct 2024 01:50:16 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) arr[i] = rand() % 100;
    return arr;
}
void output(int *arr, int n) {
    int len = 0;
    len = sizeof(int);
    for(int i = 0; i < n; i++) {
        printf("%4d", i);
    }
    //line 1
    printf("\n");
    for(int j = 0; j < (n * len); j++) {
        printf("-");
    }
    //line 2
    printf("\n");
    for(int  t = 0; t < n; t++) {
        printf("%4d", arr[t]);
    }
    //line 3
    printf("\n\n");
    return ;
    /*   船长的写法：
     *   船长的len用在第一个for里面，统计了整个字段的长度
     *
    *    int len;
    *    //line 1
    *    for (int i = 0; i < n; i++) {
    *       len += printf("%3d", i);
    *    }
    *    printf("\n");
    *    //line2
    *    for(int i = 0; i < len; i++) {
    *       printf("-");
    *    }
    *    printf("\n");
    *    //line 3
    *    for(int i = 0; i < n; i++) {
    *       printf("%3d", arr[i]);
    *    }
    *    printf("\n\n");
    *    return ;
    * */
}

//1、按照由小到大的顺序排序
int comp1(const void *p1, const void *p2) {
    const int *a = (const int *)p1;
    const int *b = (const int *)p2;
    if(*a < *b) return -1;
    if(*a == *b) return 0;
    return 1;
}

//2、按照由大到小的顺序排序
int comp2(const void *p1, const void *p2) {
    const int *a = (const int *)p1;
    const int *b = (const int *)p2;
    if(*a > *b) return -1;
    if(*a == *b) return 0;
    return 1;
}

//3、更好的实现方式, 从小到大| (即是*p1 < *p2，也是 *p1 - *p2 < 0)
int comp3(const void *p1, const void *p2) {
    return *((const int *)p1) - *((const int *)p2);
}

//4、更好的实现方式, 从大到小| (即是*p1 > *p2，也是 *p1 - *p2 > 0)
int comp4(const void *p1, const void *p2) {
    return *((const int *)p2) - *((const int *)p1);
}

int main() {
    srand(time(0));
    int *arr = getRandData(10);
    output(arr, 10);
    //乱序的数组
    printf("ues comp1:\n");
    qsort(arr, 10, sizeof(int), comp1);
    output(arr, 10);
    //第一个排序后数组
    printf("ues comp2:\n");
    qsort(arr, 10, sizeof(int), comp2);
    output(arr, 10);
    //第二个排序后数组
    printf("ues comp3:\n");
    qsort(arr, 10, sizeof(int), comp3);
    output(arr, 10);
    //第三个排序后数组
    printf("ues comp4:\n");
    qsort(arr, 10, sizeof(int), comp4);
    output(arr, 10);
    //第四个排序后数组
    return 0;
}