// ���� ���� 
#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;

	fp = fopen("sample.txt", "w");

	if( fp == NULL )
		printf("���� ���� ����\n");
	else 
		printf("���� ���� ����\n");

	fclose(fp);

	return 0;
}
