#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

int main(void)
{
	int freq[SIZE] = { 0 };		// �ֻ����� ���� �󵵸� 0���� �Ѵ�.
	int i;
	
	for(i = 0; i < 10000; i++)		// �ֻ����� 10000�� ������.
		++freq[ rand() % 6 ];	// �ش���� �󵵸� �ϳ� �����Ѵ�.

	printf("====================\n");
	printf("��     ��\n");
	printf("====================\n");

	for(i = 0; i < SIZE; i++)
		printf("%3d     %3d \n", i, freq[i]);
	
	return 0;
}
