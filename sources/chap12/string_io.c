#include <stdio.h>

int main(void)
{
	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name);
	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	scanf("%s", address);

	printf("\n�̸�: %s \n", name);
	printf("�ּ�: %s \n", address);
	return 0;
}