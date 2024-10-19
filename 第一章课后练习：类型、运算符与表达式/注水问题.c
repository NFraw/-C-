#include<stdio.h>

int main() {
	float sum;
	int a, b, c, t;
	scanf_s("%d%d%d%d", &a, &b, &c, &t);
	sum = a * b * c;
	a = sum / a;
	b = sum / b;
	c = sum / c;
	printf("%.2f", t + ((sum - (a + b) * t) / (a + b - c)));
	return 0;
}