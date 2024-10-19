#include<stdio.h>

int main() {
	long long int n;
	scanf_s("%lld", &n);
	printf("%lld", (1 + n) * n  / 2);
	return 0;
}