// ����ڷκ��� ������ �޴� �Լ� ��� ����
#include <stdio.h>

int get_integer(void);
int get_max(int x, int y);

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("�� ū ���� %d�Դϴ�. \n", get_max(a, b));
	return 0;
}

int get_integer(void)
{
	int n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	return n;
}

int get_max(int x, int y)
{
	if( x > y ) return(x);
	else return(y);
}
