#include<stdio.h>

int main() {
	int number;
	scanf_s("%d", &number);
	int site2, site1;
	site1 = number % 10;
	site2 = number / 10;
	number = site1 * 10 + site2;
	printf("%d", number);
	return 0;
}