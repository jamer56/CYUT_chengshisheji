/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>



int main(void) {
	float t = 1.06;

	printf("%-10.2f", 1.0657);
	int a[3];
	int b=0;
	for (size_t i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	if (a[0]==a[1])
	{
		b++;
	}
	if (a[0] == a[2]) {
		b++;
	}
	switch (b)
	{
	case 0:
		printf("此三數值相異");

		break;
	case 1:
		printf("有兩個數值相等");

		break;
	case 2:
		printf("此三數值相等");
		break;
	default:
		break;
	}

	return 0;
}
