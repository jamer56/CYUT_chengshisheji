/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>


int a[10];
bool ch[11];

int main(void) {
	for (size_t i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (((a[i] % 10) == 0) && !(a[i]==0)) {
			ch[i] = 1;
		}
		else
		{
			ch[i] = 0;
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		if (ch[i]==1) {
			printf("%d ",a[i]);
			ch[10] = true;
		}
	}
	if (!ch[10]) {
		printf("%d", a[9]);
	}
	return 0;
}
