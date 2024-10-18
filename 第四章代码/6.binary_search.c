/*************************************************************************
        > File Name: 6.binary_search.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 15 Sep 2024 11:15:46 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int array[10] = {0};
    for(int i = 1; i < 10; i++) {
        array[i] = array[i - 1] + (rand() % 10);
    }
    for(int i = 0; i < 10; i++ ) {
        printf("%4d", i);
    }
    printf("\n");
    for(int i = 0; i < sizeof(array); i++){
        printf("-");
    }
    printf("\n");
    for(int i= 0; i < 10; i++) {
        printf("%4d", array[i]);
    }
    printf("\n");
    int x;
    while(scanf("%d", &x) != EOF){
        int cnt1 = 0, cnt2 = 0, flag1 = 0, flag2 = 0;
        for(int i = 0; i < 10; i++) {
            cnt1 += 1;
            if(array[i] != x) continue;
            flag1 = 1;
            break;
        }
        int l = 0, r = 9, mid;
        while(l <= r){
            cnt2 += 1;
            mid = (l + r) >> 1;      //位操作，向右就等于除以二
            if(array[mid] == x){
                printf("(%d) array[%d] = %d,find %d\n", cnt2, mid, array[mid], x);
                flag2 = 1;
                break;
            }
            if(array[mid] > x) {
                printf("(%d) array[%d] = %d > %d, change [%d, %d] to [%d, %d]\n",
                    cnt2, mid, array[mid], x, l, r, l, mid - 1);
                r = mid - 1;
            }  
            else {
                printf("(%d) array[%d] = %d < %d, change [%d, %d] to [%d, %d]\n",
                    cnt2, mid, array[mid], x, l, r, mid + 1, r);
                l = mid + 1;
            }                
        }
        printf("flag1 = %d , cnt1 = %d\n", flag1, cnt1);
        printf("flag2 = %d , cnt2 = %d\n", flag2, cnt2);
        printf("\n");
    }

    return 0;
}