/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int a[10];

int main(void) {
	int do_i=0;
	do {
		scanf("%d", &a[do_i]);
		do_i++;
	} while (!fseek(stdin, 0, SEEK_END));
	
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
