/*************************************************************************
        > File Name: 5.prime.c
        > Author:ZhangNan 
        > Mail:1470161695@qq.com 
        > Created Time: Sun 15 Sep 2024 09:42:53 AM CST
 ************************************************************************/

#include<stdio.h>

int prime[100] = {0};

void init_prime(int n);

int main() {
    init_prime(50);
    int x;
    while(scanf("%d", &x) != EOF){
        printf("prime[%d] = %d\n", x, prime[x]);
    }
    return 0;
}

void init_prime(int n) {
    prime[0] = prime[1] = 1;             //素数的范围，是大于1的自然数 
    for(int i = 2; i * i <= n; i++) {    //此处有优化
        if(prime[i]) continue;
        printf("%d is prime : ", i);
        for(int j = i * i; j <= n; j += i ){  //此处有优化
            prime[j] = 1;
            printf("%d ", j);
        }
        printf("\n");
    }
    return ;
}