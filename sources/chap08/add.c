#include <stdio.h>
//
int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &value);
	return value;
}

//
int add(int x, int y)
{
	return x + y;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();

	int sum = add(x, y);
	printf("�μ��� ���� %d�Դϴ�. \n", sum);
	return 0;
}