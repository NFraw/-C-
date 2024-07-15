/*
* scanf函数原型：
* 头文件：stdio.h
* 原型：int scanf(const char *format, ...);
* format：格式控制字符串
* ...：可变参数列表
* 返回值：成功读入的 参数 个数
*/
/*
* scanf特点：
* 1.格式化读入
* 比如输入是IP地址101.32.03.10之类的
* 那么 scanf(%d.%d.%d.%d);则可以直接忽略掉里面的"."
* 2.
* 
* 
*/

/*
* 题目：
* 读入可能带空格的字符串，并输出这个字符串中的字符数量
*/

#include<stdio.h>

int main() {
	char s[100];
	printf("%s\n", s);
	scanf_s("%s", s);
	printf("scanf_s : %s\n", s);
	scanf_s("%[a-z]", s);
	printf("%%[a-z] : %s", s);
	return 0;
}