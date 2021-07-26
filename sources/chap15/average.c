#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	char fname[100];
	int number, count = 0;
	char name[20];
	float score, total = 0.0;

	printf("���� ���� �̸��� �Է��Ͻÿ�:  ");
	scanf("%s", fname);	

	// ���� ������ ���� ���� ����.
	if( (fp = fopen(fname, "w")) == NULL )
	{
		fprintf(stderr,"���� ���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}

	// ����ڷκ��� �й�, �̸�, ������ �Է¹޾Ƽ� ���Ͽ� �����Ѵ�.
	while( 1 )
	{
		printf("�й�, �̸�, ������ �Է��Ͻÿ�: (�����̸� ����)");
		scanf("%d", &number);
		if( number < 0 ) break;
		scanf("%s %f", name, &score);
		fprintf(fp, "%d %s %f\n", number, name, score);
	}
	fclose(fp);

	// ���� ������ �б� ���� ����.
	if( (fp = fopen(fname, "r")) == NULL )
	{
		fprintf(stderr,"���� ���� %s�� �� �� �����ϴ�.\n", fname);
		exit(1);
	}

	// ���Ͽ��� ������ �о ����� ���Ѵ�.
	while( !feof( fp ) )
	{
		fscanf(fp, "%d %s %f", &number, name, &score);
		total += score;
		count++;
	}

	printf("��� = %f\n", total/count);
	fclose(fp);

	return 0;
} 
