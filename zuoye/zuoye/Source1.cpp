/*
	�W̖:11027005
	����:�S���A
*/
#define _CRT_SECURE_NO_WARNINGS //��VSʹ��scanf�ӵ�
#include<stdio.h>
#include<stdlib.h>

switch (switch_on)
{
case 1:

default:
	break;
}

int main(void) {
	int a[2];
	fflush(stdin);
	scanf("%d %d", &a[0],&a[1]);

/*	for (int i = 0; i < 3; i++) {
		scanf("%d", &inputval[i]);
		if (inputval[i] < minval) {
			minval = inputval[i];
		}
	}
*/
	printf("%0.2f", (float)(a[0] + a[1]) / 2);
		return 0;
}
