#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�ﰢ���� 3���� �Է��Ͻÿ�: ");
	scanf("%d%d%d", &a, &b, &c);

	if ((a + b) > c && (b + c) > a && (a + c) > b) {
		printf("�ùٸ� �ﰢ��\n");
	}
	else {
		printf("�ùٸ��� ���� �ﰢ��\n");
	}

	return 0;
}