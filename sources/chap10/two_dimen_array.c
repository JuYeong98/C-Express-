#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 5

int main(void)
{
	int s[ROWS][COLS];	// 2���� �迭 ����
	int i, j;		// 2���� �ε��� ����

	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLS; j++)
			s[i][j] = rand() % 100;

	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
			printf("%02d ", s[i][j]);
		printf("\n");
	}
	return 0;
}