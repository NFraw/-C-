/*
* 前面的s代表string(字符串)
* 他们两个函数是对字符数组的一个操作
* sscanf与sprintf的本质
* 
*       -------------> 
* sscanf              sprintf
*      <------------- 
*/

/*
* 
*/

#include<stdio.h>

int main() {
	char s[100] = "123 456 789";
	int a, b, c;
	sscanf(s, "%d%d%d", &a, &b, &c);
	printf("a = %d, b = %d, c = %d", a, b, c);
	return 0;
}