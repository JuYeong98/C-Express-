#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main(void)
{
	int i, x, y, red, green, blue;

	HDC hdc;
	hdc = GetWindowDC(GetForegroundWindow());

	srand((unsigned)time(NULL));
	for (i = 0; i < 10000; i++)
	{
		x = rand() % 300;		// x�� 0���� 299 ������ ������ ��
		y = rand() % 300;         // y�� 0���� 299 ������ ������ ��
                                            
		red = rand() % 256;       // red�� 0���� 255 ������ ������ ��
		green = rand() % 256;     // green�� 0���� 255 ������ ������ ��
		blue = rand() % 256;      // blue�� 0���� 255 ������ ������ ��

		SetPixel(hdc, x, y, RGB(red, green, blue));
	}
	_getch();
	return 0;
}