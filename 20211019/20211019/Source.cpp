/*
	�W̖11027005
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a;
	int b;
	printf("Ոݔ��һ������A:");
	scanf_s("%d", &a);
	printf("Ոݔ��һ������B:");
	scanf_s("%d", &b);

	printf("��ݔ��Ĕ�ֵA=");
	printf("%d\n", a);
	printf("��ݔ��Ĕ�ֵB=");
	printf("%d\n", a);
	printf("%d+%d=%10d\n",a,b, a + b);
	printf("%d-%d=%10d\n",a,b, a - b);
	printf("%d*%d=%10d\n",a,b, a * b);
	printf("%d/%d=%10.5f\n",a,b, (float)a / (float)b);


	return 0;
}