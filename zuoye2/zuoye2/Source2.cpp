/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int a[10];
int c=0;
char b[250]= { 0x0 };
FILE *d;
int main(void) {
	d = fopen("d.txt","a");
	fprintf(d, "aaaa");
	freopen("ghs.txt", "w+", stdin);
	while (getchar() != EOF) {
		scanf("%d", &a[c]);
		printf("panduang %d\n", stdin != NULL);
		printf("%s", b);
		c++;

	}
	freopen("ghs.txt", "w+", stdin);

	printf("done");


	for (size_t i = 0; i < c; i++)
	{
		printf("%d", a[i]);
	}
	
	return 0;
}
