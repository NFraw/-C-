/*
* scanf����ԭ�ͣ�
* ͷ�ļ���stdio.h
* ԭ�ͣ�int scanf(const char *format, ...);
* format����ʽ�����ַ���
* ...���ɱ�����б�
* ����ֵ���ɹ������ ���� ����
*/
/*
* scanf�ص㣺
* 1.��ʽ������
* ����������IP��ַ101.32.03.10֮���
* ��ô scanf(%d.%d.%d.%d);�����ֱ�Ӻ��Ե������"."
* 2.
* 
* 
*/

/*
* ��Ŀ��
* ������ܴ��ո���ַ��������������ַ����е��ַ�����
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