/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "omp.h"

unsigned int a;
long st[10];
long ed[10];
long sum;
int main(void) {
	printf("Number of core : %d\n", omp_get_num_procs());
	printf("Number of threads : %d\n", omp_get_num_threads());
	scanf("%d", &a);
	for (size_t c = 0; c < 10; c++)
	{
		st[c] = clock();
#pragma omp parallel for 
		for (int i = 1; i < a + 1; i++) {
			for (size_t j = 0; j < i; j++)
			{
				printf("*");
			}

			printf("%d\n", omp_get_thread_num());
		}
		ed[c] = clock();
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d st %ld\n",i, st[i]);
		printf("%d ed %ld\n",i, ed[i]);
		printf("%d %ld\n",i, ed[i] - st[i]);
		sum += (ed[i] - st[i]);
	}
	printf("%ld", sum / 10);

	return 0;
}


// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
