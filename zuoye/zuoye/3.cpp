/*
	ID:8
		printf()��������(ݔ��)
		ԇ׫��һ��ʽ���քe�x�����(����)��Ӣ�ĳɿ�(����)��ݔ���ɹP�ɿ�֮ƽ���֔�(float)��
	11027005
	�S���A
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