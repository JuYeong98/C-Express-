// sizeof ������ ���α׷�
#include <stdio.h>

int main(void)
{
	int i;
	double f;
	size_t n;
	
	n = sizeof(int);
	printf("int���� ũ��=%u \n", n);

	n = sizeof(i);
	printf("���� i�� ũ��=%u \n", n);

	n = sizeof f;
	printf("���� f�� ũ��=%u \n", n);
}	
