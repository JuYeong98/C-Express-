#include <stdio.h>

int main(void)
{
	unsigned int color=0x00380000;	// �ȼ��� ����
	unsigned int result;


	result = color & 0x00ff0000;		// ����ũ ����
	result = result >> 16;		// ��Ʈ �̵� ����
	printf("%#08x\n", result);
	return 0;
}