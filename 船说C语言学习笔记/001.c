/*
* printf����ԭ�ͣ�
* ͷ�ļ���stdio.h
* ԭ�ͣ�int printf(const char* format, ...);
* format����ʽ�����ַ���
* ...���ɱ�����б�
* ����ֵ������ַ�������
*/
/*
* ��Ŀ����ʹ��printf���������һ������n��ʮ���Ʊ�ʾ������λ��
*/


#include<stdio.h>

int main() {
	int n, digit;
	printf("���������֣�����ֵΪʮ�������ֵ�λ��");
	scanf_s("%d", &n);
	digit = printf("%d", n);
	printf(" has %d digit(s)\n", digit);
	return 0;
}
