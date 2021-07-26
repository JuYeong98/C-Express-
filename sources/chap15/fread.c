#include <stdio.h>
#define SIZE 1000

int main(void)
{
	float buffer[SIZE];
	FILE *fp = NULL;
	size_t size;

	fp = fopen("binary.txt", "rb");

	if( fp == NULL ) 
	{
		fprintf(stderr, "binary.txt ������ �� �� �����ϴ�.");
		exit(1);
	}

	size = fread( &buffer, sizeof(float), SIZE, fp);

	if( size != SIZE )
	{
		fprintf(stderr, "�б� ���� �� ������ �߻��߽��ϴ�.\n");
	}
	fclose(fp);

	return 0;
}
