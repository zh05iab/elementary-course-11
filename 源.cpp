#define _CRT_SECURE_NO_WARINGS 1
#pragma warning(disable:4996)
#include<stdio.h>
//return的作用:返回值，并且函数中的return一旦被执行，后面的语句都不会再执行了，也有强制结束的意思
//通常用法return(表达式)，其中括号也可以不写
int main()
{
	int a = 1;
	int b = 2;
	printf("%d",a+b);
	return 0;
	printf("%d",a);//这一句不会执行
}
//函数中可以包含多个return，但由于return的性质，只能有一个return被执行，其余都不会执行
