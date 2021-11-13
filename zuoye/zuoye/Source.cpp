/*
	11027005
	黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#include<stdio.h>
#include<stdlib.h>



int main(void) {

	int a;
	bool isnum = 0;
	while (!isnum) {
		//fflush(stdin);
		setbuf(stdin, NULL);
		isnum = scanf("%d", &a);
		printf("%d", isnum);
	}

	switch (a)
	{
	case 1:

		printf("%d",a());
		break;
	default:
		printf("輸入無效");

		break;
	}


	/*
	int a;
	bool isnum=0;
	while(!isnum){
		//fflush(stdin);
		setbuf(stdin, NULL);
		isnum=scanf("%d", &a);
		printf("%d",isnum);
	}
	
	if (a > 0) {
		printf("你输入的整数大于零");
	}
	else if (a < 0) {
		printf("你输入的整数小于零");
	}
	else {
		printf("你输入的整数等于零");
	}
	*/


	/*
	if (a > 0) {
		printf("你输入的整数大于零");
	}
	if (a <= 0) {
		printf("你输入的整数小于或等於零");
	}

	*/
	
	return 0;
}


int a() {
	return 10;
}