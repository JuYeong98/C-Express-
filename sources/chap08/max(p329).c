#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}


int main(void)
{
	int x, y;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &y);

	int larger;
	larger = max(x, y);
	printf("�� ū���� %d�Դϴ�. \n", larger);
	return 0;
}