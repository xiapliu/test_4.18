#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//初始化字符数组时，一定要让字符数组的大小比看到字符串的长度多1
//要留一个字符位来存\n结束符
int main()
{
	char c[6] = { 'h','e','l','l','o' };
	char d[5] = "how";
	printf("%s--%s\n", c, d);
	char e[20];
	scanf("%s", e);
	printf("%s\n", e);
}
