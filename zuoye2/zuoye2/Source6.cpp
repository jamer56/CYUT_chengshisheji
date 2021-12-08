/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int input[30];
	int count_input=0;
	int min_odd=0;
	bool odd_flag=false;

	while ((scanf("%d", &input[count_input])!=EOF) &&count_input<30) {
		count_input++;
	}
	for (int i = 0; i < count_input; i++) {
		if (((input[i] % 2) == 1)) {
			if (odd_flag==false)
			{
				min_odd = input[i];
			}
			else if (min_odd> input[i])
			{
				min_odd = input[i];
			}
			odd_flag = true;
		}
	}
	for (size_t i = 0; i < count_input; i++)
	{
		printf("%d ", input[i]);
	}
	printf("\n");

	if (odd_flag)
	{
		printf("最小奇數=%d", min_odd);
	}
	else
	{
		printf("不存在奇數元素");
	}
	return 0;
}
