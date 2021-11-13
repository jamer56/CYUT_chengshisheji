/*
	ID:8
		printf()函數應用(輸出)
		試撰寫一程式，分別讀入國文(整數)、英文成績(整數)，輸出兩筆成績之平均分數(float)。
	11027005
	黃俊華
*/
#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int inint1;
	int inint2;
	scanf_s("%d %d", &inint1, &inint2);
	printf("%9.6f", ((float)inint1 + (float)inint2) / 2);
	return 0;
}