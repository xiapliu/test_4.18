#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��ʼ���ַ�����ʱ��һ��Ҫ���ַ�����Ĵ�С�ȿ����ַ����ĳ��ȶ�1
//Ҫ��һ���ַ�λ����\n������
int main()
{
	char c[6] = { 'h','e','l','l','o' };
	char d[5] = "how";
	printf("%s--%s\n", c, d);
	char e[20];
	scanf("%s", e);
	printf("%s\n", e);
}
