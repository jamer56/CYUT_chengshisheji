#include <stdio.h>   
#define number 30  
int main(void)
{
	int A[number] = { 0 };
	int B[number] = { 0 };
	int i, j, min=0;

	for (i = 0; i < number; i++) 
	{
		scanf("%d", &A[i]);
		if (A[i] % 2 == 1) 
		{ //�Д��Ƿ���攵
			B[i] = A[i]; //̎�浽�e�����
		}
	}

	for (i = 0; i < number; i++) 
	{
		if (B[i] > 0) {
			min = B[i];
		}
	}

	for (j = 0; j < number; j++) 
	{
		if (B[j] < min && B[j]>0) 
		{
			min = B[j];
		}
	}
	if (min == 0) 
	{
		printf("�������攵Ԫ��");
	}
	else {
		printf("��С�攵=%d\n", min);

	}
	return 0;
}