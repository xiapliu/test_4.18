#include<stdio.h>
int main()//数组，具有相同的数据类型。使用过程中需要保护原始数据。
{
	//定义数组就是写一个变量名，后面加上[]，[]内写上整型变量
	//定义数组的一瞬间，数组占据的空间大小就确定下来了
	int j = 10;
	int a[5] = { 1,3,5,7,9 };
	int i = 3;

	printf("j=%d", j);
	//a[5]访问越界，会改掉前面的变量，会造成数据异常。
}