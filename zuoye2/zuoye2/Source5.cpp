/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int A[2][3][2];
	for (size_t k = 0; k < 2; k++)
	{
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 2; j++)
			{
				scanf("%d", &A[k][i][j]);
			}
		}
	}

	printf("\n");
	for (size_t k = 0; k < 2; k++)
	{
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 2; j++)
			{
				printf("%3d ", A[k][i][j]);
			}
			printf("\n");
		}
		printf("----------------------------\n");

	}
	return 0;
}
