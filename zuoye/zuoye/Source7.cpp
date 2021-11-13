/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#include<stdio.h>
#include<stdlib.h>

int a;
int sum = 0;
int main(void) {
	scanf("%d", &a);
	for (int i = 1; i < a+1; i++) {
		for (size_t j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("sum=%d", sum);
	
	return 0;
}
