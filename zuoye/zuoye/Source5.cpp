/*
	�W̖:11027005
	����:�S���A
*/
#define _CRT_SECURE_NO_WARNINGS //��VSʹ��scanf�ӵ�
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int val = 0;
int sum=0;
int main(void) {
	do
	{
		scanf("%d",&val);
	} while ((!(val%2)==0)||(val<=0));
	for (int i = 0; i <= val;i+=2) {
		sum += i;
	}
	printf("%d",sum);
	return 0;
}
