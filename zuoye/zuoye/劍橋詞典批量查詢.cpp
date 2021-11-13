/*
	學號:11027005
	姓名:黃俊華
*/
#define _CRT_SECURE_NO_WARNINGS //在VS使用scanf加的
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define DEBUG 0;	//是否開啟偵錯
int ver[3] = {0,2,1};	//版本號
char info[100] = "未來計畫:使用不同網站查詢";
bool fail_flag = 0;	//檢測是否有單字輸入錯誤
char setting_skip = 'g';	//如果有輸入錯誤是否要跳過
bool q1_flag = 0;	//檢測setting_skip 是否設定成功
int fail_count = 0;	//紀錄輸入失敗次數
char a[300];		//網址緩衝
int count = 0;		//設定要查詢單字數量
char out[125];		//輸出訊息緩衝
char b[60][31];		//儲存輸入單字

int main(void) {
	printf("工具名稱:劍橋詞典批量查詢\n目前版本:%d.%d.%d\n", ver[0], ver[1], ver[2]); //顯示程式資訊
	printf("%s\n", info);
	printf("%s:", "查詢數量(請小於60)(數值愈高對電腦要求愈高)(此數值決定瀏覽器分頁數量 建議不超過20)");

	while (true)		//檢測輸入數值
	{
		if (scanf("%d", &count) && count <= 60) {
			break;
		}
		else
		{
			#if DEBUG
				printf("debug_錯誤輸入\n");
			#endif // DEBUG
			printf("輸入錯誤請重試");
			scanf("%*[^\n]%*c");
			//while (getchar() != '/n');
			//fflush(stdin);
		}
		#if DEBUG
		printf("debug_迴圈檢測\n");
		#endif // DEBUG
	}
	
	system("cls");
	//fflush(stdin);
	printf("請輸入欲查詢單字\n(單字長度請小於30)\n(空白建用-代替 例如:last name 請改為last-name)\n");
	for (int i=0; i < count; i++) {
		printf("%d:", i);
		if (!scanf_s("%s", &b[i][0], 30)) {
			printf("第%d項輸入失敗\n", i);
			scanf("%*[^\n]%*c");//清除輸入緩存
			fail_count++;	//紀錄失敗次數
			fail_flag = 1;	//紀錄失敗狀態
		}
	}
	if (fail_flag) {
		printf("檢測到%d項輸入失敗是否跳過Y/N", fail_count);
		while (!q1_flag)
		{
			//scanf("%*[^\n]%*c");
			switch (setting_skip)
			{
			case 'Y':
			case 'y':
			case 'N':
			case 'n':
				q1_flag = 1;
#if DEBUG
	printf("debug_q1_flag=1\n");
#endif // DEBUG

				break;
			default:
				scanf("%c", &setting_skip);
			}
		}

	}
	
	for (int i = 0; i < count; i++) {
		if (setting_skip == 'y'|| setting_skip == 'Y') {
			if (b[i][0] == '\0') {			//檢測字串是否為空
#if DEBUG
	printf("debug_跳過:%d\n", i);
#endif // DEBUG
				printf("跳過:%d\n", i);

			}
			else
			{
				strcpy(a, "start https://dictionary.cambridge.org/zht/詞典/英語-漢語-繁體/");
				strcpy(out, "開啟網頁:https://dictionary.cambridge.org/zht/詞典/英語-漢語-繁體/");
				strcat(a, b[i]);
				printf("%s\n", strcat(out, b[i]));
				system(a);
			}
		}
		else {
			strcpy(a, "start https://dictionary.cambridge.org/zht/詞典/英語-漢語-繁體/");
			strcpy(out, "開啟網頁:https://dictionary.cambridge.org/zht/詞典/英語-漢語-繁體/");
			strcat(a, b[i]);
			printf("%s\n", strcat(out, b[i]));
			system(a);
		}
	}
	//strcat(a, b); 功能:把b字串內容連接到a後面 例: a="a" b="b" 執行完後 a值"ab" b值"b"
	//strcpy(a,"文字") 功能 字串賦值
	return 0;
}

