/*
* ǰ���s����string(�ַ���)
* �������������Ƕ��ַ������һ������
* sscanf��sprintf�ı���
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