/*
	����:�S���A
	�W̖:11027005
	����:�yԇ���N����
*/
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <CRTDBG.H>
#include <windows.h>


int mode = 0; //ģʽ�x��


int main(void)
{
	while (1) {
		if (!_kbhit()) {
			switch (_getch())
			{
			case 27:
				mode = 1;
				break;
			default:
				break;
			}
		}
		break;
	}
	switch (mode)
	{
	case 1:

			printf("mode=1");
		break;
	default:
		break;
	}
	
#ifdef _DEBUG
	printf("test");
#endif // DEBUG

	return 0;

}