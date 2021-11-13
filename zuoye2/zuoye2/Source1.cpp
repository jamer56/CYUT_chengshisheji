/*
    學號:11027005
    姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的  
#pragma warning(disable:4996) 

#include<stdio.h>
#include<stdlib.h>

int a=9;
int sum = 0;
int main(void) {
    //scanf("%d", &a);

    for (int i = 1; i <= a; i+=2)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}
