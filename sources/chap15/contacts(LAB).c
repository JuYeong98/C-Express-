#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100

typedef struct person {		// ����ó�� ����ü�� ǥ���Ѵ�. 
	char name[SIZE];		// �̸�
	char address[SIZE];	// �ּ� 
	char mobilephone[SIZE];	// �޴���
	char desc[SIZE];		// Ư¡
} PERSON;

void menu();
PERSON get_record();
void print_record(PERSON data);
void add_record(FILE *fp);
void search_record(FILE *fp);
void update_record(FILE *fp);

int main(void)
{	
	FILE *fp;
	int select;
	// ���� ������ �߰� ���� �����Ѵ�. 
	if( (fp = fopen("address.dat", "a+")) == NULL ) {
		fprintf(stderr,"�Է��� ���� ������ �� �� �����ϴ�");
		exit(1);
	}
	while(1) 	{
		menu();		// �޴��� ǥ���Ѵ�
		printf("�������� �Է��Ͻÿ�: ");	// ����ڷκ��� ������ �޴´�
		scanf("%d",&select);
		switch(select) {
		case 1:	add_record(fp); break;	// �����͸� �߰��Ѵ�
		case 2:	update_record(fp); break;	// �����͸� �����Ѵ�
		case 3:	search_record(fp); break;	// �����͸� Ž���Ѵ�
		case 4:	return 0;
		}
	}
	fclose(fp);	// ���� ������ �ݴ´�
	return 0;
}
// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ��ȯ�Ѵ�
PERSON get_record()
{
	PERSON data;

	fflush(stdin);		// ǥ�� �Է��� ���۸� ����
	printf("�̸�: "); 	gets(data.name);	// �̸��� �Է¹޴´�
	printf("�ּ�: ");	gets(data.address);	// �ּҸ� �Է¹޴´�
	printf("�޴���: ");	gets(data.mobilephone);	// �޴��� ��ȣ�� �Է¹޴´�
	printf("Ư¡: ");	gets(data.desc);	// Ư¡�� �Է� �޴´�
	return data;
}
// ����ü �����͸� ȭ�鿡 ����Ѵ�. 
void print_record(PERSON data)
{
	printf("�̸�: %s \n", data.name);		printf("�ּ�: %s\n", data.address);
	printf("�޴���: %s\n", data.mobilephone);	printf("Ư¡: %s\n", data.desc);
}
// �޴��� ȭ�鿡 ǥ���ϴ� �Լ�
void menu()
{
	printf("====================\n");	
	printf(" 1. �߰�\n 2. ����\n 3. �˻�\n 4. ����\n");
	printf("====================\n");
}
// �����͸� �߰��Ѵ�
void add_record(FILE *fp)
{
	PERSON data;
	data = get_record();	// ����ڷκ��� �����͸� �޾Ƽ� ����ü�� ����
	fseek(fp, 0, SEEK_END);	// ������ ������ ����	
	fwrite(&data, sizeof(data), 1, fp);	// ����ü �����͸� ���Ͽ� ����
}
// �����͸� Ž���Ѵ�
void search_record(FILE *fp)
{
	char name[SIZE];
	PERSON data;

	fseek(fp, 0, SEEK_SET);	// ������ ó������ ����
	fflush(stdin);
	printf("Ž���ϰ��� �ϴ� ����� �̸�: ");
	gets(name);		// �̸��� �Է¹޴´�
	while(!feof(fp)){		// ������ ������ �ݺ��Ѵ�
		fread(&data, sizeof(data), 1, fp);	// ���� ��ġ���� �����͸� �д´�
		if( strcmp(data.name, name) == 0 ){	// �̸��� ���Ѵ�
			print_record(data);	// ��ġ�ϸ� �����͸� ȭ�鿡 ����Ѵ�
			break;
		}
	}
}
// �����͸� �����Ѵ�
void update_record(FILE *fp)	
{
	//...
}
