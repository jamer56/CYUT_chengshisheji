/*
	�W̖:11027005
	����:�S���A
*/
#define _CRT_SECURE_NO_WARNINGS //��VSʹ��scanf�ӵ�
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
		printf("��С�攵=%d", min_odd);
	}
	else
	{
		printf("�������攵Ԫ��");
	}
	return 0;
}
