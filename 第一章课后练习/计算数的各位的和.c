//五位数及以下的数的各位数的和
#include<stdio.h>

int main() {
	int number, n1, n2, n3, n4, n5;
	scanf_s("%d", &number);
	n5 = number / 10000;
	n4 = number % 10000 / 1000;
	n3 = number % 10000 % 1000 / 100;
	n2 = number % 10000 % 1000 % 100 / 10;
	n1 = number % 10;
	printf("%d",n1 + n2 + n3 + n4 + n5);
	return 0;
}