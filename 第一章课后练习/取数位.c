#include<stdio.h>

int main() {
	int number;
	scanf_s("%d",&number);
	printf("%d\n", number / 100);
	printf("%d\n", (number % 100) / 10);
	printf("%d", (number % 100) %10);
	return 0;
}