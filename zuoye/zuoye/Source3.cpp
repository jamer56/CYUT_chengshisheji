
#include<stdio.h>
#include<stdlib.h>
//#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)

int main(void) {
	//system("chcp 936");
	//system("cls");
	int val = 0;
	int tempa = 0;
	int out[50];
	int out_count = 0;
	scanf("%d", &val);

	for (int i = 1; i < val; i++) {
		for (int j = 1; j <= i; j++) {
			if ((i % j) == 0) {
				tempa++;
				//printf("DE_ %d %d \n", i, j);
			}
		}
		if (tempa == 2) {
			out[out_count] = i;
			out_count++;
		}
		tempa = 0;
	}
	for (int i = 0; i < out_count; i++) {
		printf("%d ", out[i]);
	}
	//system("pause");
	return 0;
}
