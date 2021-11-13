/*
    ID:129
    題號:5
    標題:printf()函數應用(輸出)
    內容:請撰寫一程式輸出"VC Programming Midterm"字串五次(不包含" ")
        ，每次輸出需換行，輸入與輸出格式如範例所示。
    學號:11027005
    姓名:黃俊華
*/
#include<stdio.h>  
#include<stdlib.h>  

int main(void) {
    for (int i = 0; i < 5; i++) {
        printf("VC Programming Midterm\n");
    }
    return 0;
}  