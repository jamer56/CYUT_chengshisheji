/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

void debug_arr_print(void);
void get_val(void);
int JiSuan(int x, int y);

#define ARR_a_ROW 3
#define ARR_a_COL 2 //決定 連加次數
#define ARR_b_COL 3

int a[ARR_a_ROW][ARR_a_COL];
int b[ARR_a_COL][ARR_b_COL];
int out[ARR_a_ROW][ARR_b_COL];

int main(void) {	
	get_val();
	debug_arr_print();

	for (size_t k = 0; k < ARR_a_ROW; k++)
	{
		for (size_t l = 0; l < ARR_b_COL; l++)
		{
			out[k][l] = JiSuan(k, l);
		}
	}
	for (size_t k = 0; k < ARR_a_ROW; k++)
	{
		for (size_t l = 0; l < ARR_b_COL; l++)
		{
			printf("%d ", out[k][l]);
		}
		printf("\n");
	}
	return 0;
}

void debug_arr_print(void) {
	for (size_t i = 0; i < (ARR_a_ROW * ARR_a_COL); i++) {
		int row = i / ARR_a_COL;
		int col = i % ARR_a_COL;
		printf("%d ", a[row][col]);
		if (col == ARR_a_COL - 1) {
			printf("\n");
		}
	}
	for (size_t i = 0; i < (ARR_a_COL * ARR_b_COL); i++) {
		int row = i / ARR_b_COL;
		int col = i % ARR_b_COL;
		printf("%d ", b[row][col]);
		if (col == ARR_b_COL - 1) {
			printf("\n");
		}
	}
}

void get_val() {
	for (size_t i = 0; i < (ARR_a_ROW * ARR_a_COL); i++) {
		int row = i / ARR_a_COL;
		int col = i % ARR_a_COL;
		scanf("%d", &a[row][col]);
	}
	for (size_t i = 0; i < (ARR_a_COL * ARR_b_COL); i++) {
		int row = i / ARR_b_COL;
		int col = i % ARR_b_COL;
		scanf("%d", &b[row][col]);
	}
}

//x 指定A的ROW ;y 指定B的COL
int JiSuan(int x,int y) {
	int sum = 0;
	for (int i = 0; i < (ARR_a_COL ); i++) {
		int j = ARR_a_COL - i;
		sum += (a[x][i] * b[i][y]);
	}
	return sum;
}




