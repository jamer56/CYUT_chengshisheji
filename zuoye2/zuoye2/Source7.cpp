/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

#define arr_row 3
#define arr_col 2

int main(void) {
	int input[arr_row][arr_col];
	int sum_odd=0;
	int sum_even = 0;
	for (size_t i = 0; i < arr_row; i++)
	{
		for (size_t j = 0; j < arr_col; j++)
		{
			scanf("%d", &input[i][j]);
		}
	}

	for (size_t i = 0; i < arr_row; i++)
	{
		for (size_t j = 0; j < arr_col; j++)
		{
			printf("%d ", input[i][j]);
			if (input[i][j]%2==0)
			{
				sum_even += input[i][j];
			}
			else {
				sum_odd += input[i][j];
			}
		}
		printf("\n");
	}
	printf("奇數元素的總和=%d\n", sum_odd);
	printf("偶數元素的總和=%d", sum_even);


	return 0;
}
