/*
	11027005
	�S���A
*/
#define _CRT_SECURE_NO_WARNINGS //��VSʹ��scanf�ӵ�
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
		printf("ݔ��oЧ");

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
		printf("�����������������");
	}
	else if (a < 0) {
		printf("�����������С����");
	}
	else {
		printf("�����������������");
	}
	*/


	/*
	if (a > 0) {
		printf("�����������������");
	}
	if (a <= 0) {
		printf("�����������С�ڻ�����");
	}

	*/
	
	return 0;
}


int a() {
	return 10;
}