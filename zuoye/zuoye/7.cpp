/*
	ID:151
	題號:7
	標題:『printf()函數應用(輸出)』
	內容:請撰寫一程式，在不同一行輸出字串“我竟然厲害到會寫程式” 三次(不包含“ ” )，輸入與輸出格式如範例所示。
	學號:11027005
	姓名:黃俊華
*/
#include<stdio.h>
#include<stdlib.h>

char str[]="我竟然厲害到會寫程式";

int main(void) {
	for (int i = 0; i < 3; i++) {
		printf("%s\n", str);
	}
	return 0;
}