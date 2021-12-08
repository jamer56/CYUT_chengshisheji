/*
	學號:11027005
	姓名:黃俊華
*/

//#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#if _VS
	#include"test.h"
#else
	#error nVS
#endif

#define arr_row 3 //學生人數
#define arr_col 4
#define arr_deep 2 //班級數

void debug_inf(void);

int input[arr_deep][arr_row][arr_col];//row [0]學號 [1]國文分 [2]英文分 [3]程式分
int CH_max[4]; // [0]班級 [1]學號 [2]分數 [3]國文分數
bool max_flag;

int main(void) {
	int temp = 0;
	#ifdef _DEBUG
		printf("DEBUG中\n\a");
	#endif 
	
	for (size_t k = 0; k < arr_deep; k++)
	{
		if (scanf("%d", &temp) == 1)
		{
			for (size_t i = 0; i < arr_row; i++)//陣列迴圈
			{
				for (size_t j = 0; j < arr_col; j++)
				{
					scanf("%d", &input[k][i][j]);

					if ((j == 1) && (input[k][i][j] > CH_max[3])) {
						max_flag = true;
					}
				}
				if (max_flag) {
					CH_max[0] = temp;
					CH_max[1] = input[k][i][0];
					CH_max[2] = input[k][i][1] + input[k][i][2] + input[k][i][3];
					CH_max[3] = input[k][i][1];
					max_flag = false;
				}
			}
		}
	}
#if _DEBUG
	debug_inf();
#endif // _DEBUG

	printf("Class%d\n", CH_max[0]);
	printf("%d %d", CH_max[1], CH_max[2]);
	return 0;
}

void debug_inf(void) {
	line_word_line('-', 40,"DEBUG");
	for (size_t k = 0; k < arr_deep; k++)
	{
		char buff[6];
		sprintf(buff, "陣列%d", k);
		line_word_line('-', 20, buff);
		
		for (size_t i = 0; i < arr_row; i++)
		{
			for (size_t j = 0; j < arr_col; j++)
			{
				printf("%d ", input[k][i][j]);
			}
			printf("\n");
		}
	}
	line_word_line('-', 40, "DEBUG_END");
}