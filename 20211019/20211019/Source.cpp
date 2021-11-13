/*
	學號11027005
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int a;
	int b;
	printf("請輸入一個整數A:");
	scanf_s("%d", &a);
	printf("請輸入一個整數B:");
	scanf_s("%d", &b);

	printf("你輸入的數值A=");
	printf("%d\n", a);
	printf("你輸入的數值B=");
	printf("%d\n", a);
	printf("%d+%d=%10d\n",a,b, a + b);
	printf("%d-%d=%10d\n",a,b, a - b);
	printf("%d*%d=%10d\n",a,b, a * b);
	printf("%d/%d=%10.5f\n",a,b, (float)a / (float)b);


	return 0;
}