/*
測試用標頭檔
*/

//#pragma once
#ifndef _TEST_H
#define _TEST_H

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//繪製指定長度並包含指定字串的分隔線
//例如:----測試----
//rel	分隔線字元
//length	分隔線長度
//str	中間的說明文字
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
//繪製分隔線
//rel	繪製的字符
//length	繪製的數量
void line(char rel ,unsigned int length) {
	for (size_t i = 0; i < length; i++)
	{
		printf("%c", rel);
	}
	printf("\n");
}
#endif
