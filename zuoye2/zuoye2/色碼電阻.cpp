/*
	�W̖:11027005
	����:�S���A
*/
#define _CRT_SECURE_NO_WARNINGS //��VSʹ��scanf�ӵ�
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include <time.h>

unsigned int count=0;
char seMa[12][10] = {
	"��","��","�t","��","�S","�G","�{","��","��","��","��","�y"
};
char miCi[4] = { 'K','M','G','T' };
int st;
int ed;

int scor[2];//0 ���_ 1�e�` 
int main(void) {
	system("chcp 936");
	printf("���}��ʽ ��ֵx�`��\n");
	printf("Ҫ���}��");
	while (!(count>0))
	{
		scanf("%d", &count);
		scanf("%*[^\n]%*c");

	}
	printf("ST %d\n", clock());
	st = clock();
	for (size_t ll = 0; ll < count; ll++)
	{
		int val[4];
		int input[2];
		char ans_miCi;
		char input_miCi;
		int temp_ans_num = 0;
		int temp_ans_x = 0;
		scanf("%*[^\n]%*c");



		srand((unsigned long)time(NULL) * clock());
		val[0] = (rand() % 9) + 1;
		val[1] = (rand() % 10);
		val[2] = (rand() % 8);
		val[3] = (rand() % 2) + 10;


		printf("\n%s%s%s%s\n", seMa[val[0]], seMa[val[1]], seMa[val[2]], seMa[val[3]]);
		//printf("%d\n", ((val[0] * 10 + val[1]) * ((int)pow(10, val[2]))));
		ans_miCi = 'N';
		temp_ans_num = ((val[0] * 10 + val[1]) * ((int)pow(10, val[2])));
		bool flag = false;
		for (size_t i = 12; i >= 3; i -= 3)
		{
			//printf("\n%d\n", i);

			//printf("%d",(((val[0] * 10 + val[1]) * ((int)pow(10, val[2]))) % ((int)pow(10, i))));
			if (((((val[0] * 10 + val[1]) * ((int)pow(10, val[2]))) % ((int)pow(10, i))) == 0) && !flag) {
				ans_miCi = miCi[(i / 3) - 1];
				temp_ans_num = (((val[0] * 10 + val[1]) * ((int)pow(10, val[2]))) / ((int)pow(10, i)));
				flag = true;
			}
		}

		//printf("\n\n%d%c", temp_ans_num, ans_miCi);
		if (val[3] == 10) {
			temp_ans_x = 5;
		}
		else {
			temp_ans_x = 10;
		}

		if (ans_miCi == 'N') {
			scanf("%dx%d", &input[0], &input[1]);
			if (input[0] == temp_ans_num && input[1] == temp_ans_x)
			{
				printf("���_\n");
				scor[0]++;
			}
			else {
				printf("�e�`\n");
				scor[1]++;
			}
		}
		else
		{
			scanf("%d%cx%d", &input[0], &input_miCi, &input[1]);
			if (input[0] == temp_ans_num && input_miCi == ans_miCi && input[1] == temp_ans_x)
			{
				printf("���_\n");
				scor[0]++;
			}
			else {
				printf("�e�`\n");
				scor[1]++;
			}
		}
		ed = clock();
	}
	printf("ED %d\n", clock());
	printf("\n--------------------\n�ĕr%d����\n",ed-st);
	printf("���}����:%d\n", scor[0]+ scor[1]);
	printf("���_:%d\n", scor[0]);
	printf("�e�`:%d\n", scor[1]);
	printf("���_��:%d\n", (scor[0]*100) /(scor[0] + scor[1]));
	system("pause");
	return 0;
}
