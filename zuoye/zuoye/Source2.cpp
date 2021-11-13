/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#include<stdio.h>
#include<stdlib.h>

int zheng = 0;
int a = 0;
int from_base = 0;
int to_base = 0;
double val = 0;
int jingwei = 0;
bool done_flag=0;

int main(void) {
	printf("整数部=1 OR小数部=2");
	scanf("%d", &zheng);
	printf("from");
	scanf("%d", &from_base);
	printf("to");
	scanf("%d", &to_base);
	printf("val");
	scanf("%lf", &val);
	while (!done_flag && a<30) {
		printf("%d %0.50f\n", jingwei, val);
		jingwei = 0;
		val = val * (double)to_base;
		if (val >= 1) {
			jingwei = (int)val;
			val = val - jingwei;
		}
		if (val == 0) {
			done_flag = 1;
		}
		a = a + 1;
	}
	printf("%d %0.50f\n", jingwei, val);


	return 0;
}
