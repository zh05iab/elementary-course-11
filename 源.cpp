#define _CRT_SECURE_NO_WARINGS 1
#pragma warning(disable:4996)
#include<stdio.h>
//return������:����ֵ�����Һ����е�returnһ����ִ�У��������䶼������ִ���ˣ�Ҳ��ǿ�ƽ�������˼
//ͨ���÷�return(���ʽ)����������Ҳ���Բ�д
int main()
{
	int a = 1;
	int b = 2;
	printf("%d",a+b);
	return 0;
	printf("%d",a);//��һ�䲻��ִ��
}
//�����п��԰������return��������return�����ʣ�ֻ����һ��return��ִ�У����඼����ִ��
