/*
�yԇ�Ø��^�n
*/

//#pragma once
#ifndef _TEST_H
#define _TEST_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//�L�uָ���L�ȁK����ָ���ִ��ķָ���
//����:----�yԇ----
//rel	�ָ�����Ԫ
//length	�ָ����L��
//str	���g���f������
void line_word_line(char rel,unsigned int length,const char str[])
{
	length -= strlen(str);
	length /= 2;
	for (size_t i = 0; i < length; i++)
	{
		printf("%c", rel);
	}
	printf("%s", str);
	for (size_t i = 0; i < length; i++)
	{
		printf("%c", rel);
	}
	printf("\n");
}
//�L�u�ָ���
//rel	�L�u���ַ�
//length	�L�u�Ĕ���
void line(char rel ,unsigned int length) {
	for (size_t i = 0; i < length; i++)
	{
		printf("%c", rel);
	}
	printf("\n");
}
#endif
