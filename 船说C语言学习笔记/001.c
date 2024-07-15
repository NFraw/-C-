/*
* printf函数原型：
* 头文件：stdio.h
* 原型：int printf(const char* format, ...);
* format：格式控制字符串
* ...：可变参数列表
* 返回值：输出字符的数量
*/
/*
* 题目：请使用printf函数，求解一个数字n的十进制表示的数字位数
*/


#include<stdio.h>

int main() {
	int n, digit;
	printf("请输入数字，返回值为十进制数字的位数");
	scanf_s("%d", &n);
	digit = printf("%d", n);
	printf(" has %d digit(s)\n", digit);
	return 0;
}
