#include<stdio.h>

int main() {
	double a, b;
	scanf_s("%lf%lf", &a, &b);
	double circumference = 0;
	circumference = 2 * (a + b);
	double area = 0;
	area = a * b;
	printf("%.2f\n", circumference);
	printf("%.2f\n",area);
	return 0;
}