#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1, *fp2;
	char file1[100], file2[100];

	char buffer[1024];
	int count;

	printf("ù��° ���� �̸�:  ");
	scanf("%s", file1);	

	printf("�ι�° ���� �̸�:  ");
	scanf("%s", file2);	

	if( (fp1 = fopen(file1, "rb")) == NULL )
	{
		fprintf(stderr,"�Է��� ���� ������ �� �� �����ϴ�.\n");
		exit(1);
	}
	if( (fp2 = fopen(file2, "ab")) == NULL )
	{
		fprintf(stderr,"�߰��� ���� ������ �� �� �����ϴ�.\n");
		exit(1);
	}
	while((count=fread(buffer,sizeof(char),1024,fp1))>0){
		fwrite(buffer,sizeof(char),count,fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
} 

