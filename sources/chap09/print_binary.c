// 2���� �������� ���
#include <stdio.h>

void print_binary(int x);

int main(void)
{
	print_binary(9);
}

void print_binary(int x)
{
	if( x > 0 ) 
	{
		print_binary(x / 2);		// ��� ȣ��
		printf("%d", x % 2);		// �������� ���
	}
}
