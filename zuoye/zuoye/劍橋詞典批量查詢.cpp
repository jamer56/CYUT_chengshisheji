/*
	�W̖:11027005
	����:�S���A
*/
#define _CRT_SECURE_NO_WARNINGS //��VSʹ��scanf�ӵ�
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define DEBUG 0;	//�Ƿ��_�����e
int ver[3] = {0,2,1};	//�汾̖
char info[100] = "δ��Ӌ��:ʹ�ò�ͬ�Wվ��ԃ";
bool fail_flag = 0;	//�z�y�Ƿ��І���ݔ���e�`
char setting_skip = 'g';	//�����ݔ���e�`�Ƿ�Ҫ���^
bool q1_flag = 0;	//�z�ysetting_skip �Ƿ��O���ɹ�
int fail_count = 0;	//�o�ݔ��ʧ���Δ�
char a[300];		//�Wַ���n
int count = 0;		//�O��Ҫ��ԃ���֔���
char out[125];		//ݔ��ӍϢ���n
char b[60][31];		//����ݔ�����

int main(void) {
	printf("�������Q:�����~��������ԃ\nĿǰ�汾:%d.%d.%d\n", ver[0], ver[1], ver[2]); //�@ʾ��ʽ�YӍ
	printf("%s\n", info);
	printf("%s:", "��ԃ����(ՈС�60)(��ֵ���ߌ���XҪ������)(�˔�ֵ�Q���g�[����퓔��� ���h�����^20)");

	while (true)		//�z�yݔ�딵ֵ
	{
		if (scanf("%d", &count) && count <= 60) {
			break;
		}
		else
		{
			#if DEBUG
				printf("debug_�e�`ݔ��\n");
			#endif // DEBUG
			printf("ݔ���e�`Ո��ԇ");
			scanf("%*[^\n]%*c");
			//while (getchar() != '/n');
			//fflush(stdin);
		}
		#if DEBUG
		printf("debug_ޒȦ�z�y\n");
		#endif // DEBUG
	}
	
	system("cls");
	//fflush(stdin);
	printf("Ոݔ������ԃ����\n(�����L��ՈС�30)\n(�հ׽���-���� ����:last name Ո�Ğ�last-name)\n");
	for (int i=0; i < count; i++) {
		printf("%d:", i);
		if (!scanf_s("%s", &b[i][0], 30)) {
			printf("��%d�ݔ��ʧ��\n", i);
			scanf("%*[^\n]%*c");//���ݔ�뾏��
			fail_count++;	//�o�ʧ���Δ�
			fail_flag = 1;	//�o�ʧ����B
		}
	}
	if (fail_flag) {
		printf("�z�y��%d�ݔ��ʧ���Ƿ����^Y/N", fail_count);
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
			if (b[i][0] == '\0') {			//�z�y�ִ��Ƿ���
#if DEBUG
	printf("debug_���^:%d\n", i);
#endif // DEBUG
				printf("���^:%d\n", i);

			}
			else
			{
				strcpy(a, "start https://dictionary.cambridge.org/zht/�~��/Ӣ�Z-�h�Z-���w/");
				strcpy(out, "�_���W�:https://dictionary.cambridge.org/zht/�~��/Ӣ�Z-�h�Z-���w/");
				strcat(a, b[i]);
				printf("%s\n", strcat(out, b[i]));
				system(a);
			}
		}
		else {
			strcpy(a, "start https://dictionary.cambridge.org/zht/�~��/Ӣ�Z-�h�Z-���w/");
			strcpy(out, "�_���W�:https://dictionary.cambridge.org/zht/�~��/Ӣ�Z-�h�Z-���w/");
			strcat(a, b[i]);
			printf("%s\n", strcat(out, b[i]));
			system(a);
		}
	}
	//strcat(a, b); ����:��b�ִ������B�ӵ�a���� ��: a="a" b="b" �������� aֵ"ab" bֵ"b"
	//strcpy(a,"����") ���� �ִ��xֵ
	return 0;
}

